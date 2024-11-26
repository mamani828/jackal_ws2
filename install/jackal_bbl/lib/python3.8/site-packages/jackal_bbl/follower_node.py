import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist, Point
from std_msgs.msg import Float32MultiArray
from nav_msgs.msg import Odometry, Path
from geometry_msgs.msg import PoseStamped, Pose
from tf_transformations import euler_from_quaternion
import numpy as np
from gazebo_msgs.srv import SpawnEntity, DeleteEntity
import xml.etree.ElementTree as ET
import uuid

class PurePursuitNode(Node):
    def __init__(self):
        super().__init__('follow_node')
        
        # Publishers and Subscribers
        self.subscriber = self.create_subscription(
            Float32MultiArray, 'bezier_trajectory', self.trajectory_callback, 1)
        self.odom_subscriber = self.create_subscription(
            Odometry, 'odom', self.odometry_callback, 1)
        self.publisher = self.create_publisher(Twist, 'cmd_vel', 1)
        self.path_publisher = self.create_publisher(Path, 'bezier_path', 1)
        
        # Initialize Gazebo services
        self.spawn_client = self.create_client(SpawnEntity, '/spawn_entity')
        self.delete_client = self.create_client(DeleteEntity, '/delete_entity')
        while not self.spawn_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Spawn service not available, waiting...')
        while not self.delete_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Delete service not available, waiting...')
        
        # Trail visualization parameters
        self.trail_markers = []
        self.last_marker_pose = None
        self.marker_spacing = 0.1  # Distance between trail markers
        
        # Initialize variables
        self.trajectory = None
        self.current_pose = None
        self.control_rate = 10.0  # Hz
        self.has_received_trajectory = False
        self.waiting_warned = False
        self.goal_reached = False
        
        # Pure Pursuit parameters
        self.base_lookahead = 0.3
        self.min_lookahead = 0.2
        self.goal_tolerance = 0.1
        self.base_velocity = 0.5
        
        # Create control loop timer
        self.timer = self.create_timer(1.0 / self.control_rate, self.control_loop)
        
        self.get_logger().info('Pure Pursuit Node initialized')
        self.get_logger().info('Waiting for trajectory...')
    



    def trajectory_callback(self, msg):
        """Callback to handle received trajectory data."""
        if not self.has_received_trajectory:  # Only accept first trajectory #TODO is to check for unique
            try:
                self.trajectory = np.array(msg.data).reshape(-1, 2)
                self.has_received_trajectory = True
                self.publish_path()
                self.get_logger().info(f'Received initial trajectory with {self.trajectory.shape[0]} points')
            except Exception as e:
                self.get_logger().error(f'Error processing trajectory data: {str(e)}')

    def publish_path(self):
        """Publish the path for visualization in RViz2"""
        if self.trajectory is None:
            return
            
        path_msg = Path()
        path_msg.header.stamp = self.get_clock().now().to_msg()
        path_msg.header.frame_id = "odom"
        
        for point in self.trajectory:
            pose = PoseStamped()
            pose.header.stamp = self.get_clock().now().to_msg()
            pose.header.frame_id = "odom"
            pose.pose.position.x = float(point[0])
            pose.pose.position.y = float(point[1])
            pose.pose.position.z = 0.0
            pose.pose.orientation.w = 1.0
            path_msg.poses.append(pose)
            
        self.path_publisher.publish(path_msg)

    def odometry_callback(self, msg):
        """Callback to handle odometry data."""
        position = msg.pose.pose.position
        orientation = msg.pose.pose.orientation
        yaw = self.get_yaw_from_quaternion(orientation)
        self.current_pose = (position.x, position.y, yaw)
        self.get_logger().debug(f'Received odom: x={position.x:.2f}, y={position.y:.2f}, yaw={yaw:.2f}')
        self.waiting_warned = False  # Reset warning flag when we get odom data

    def get_yaw_from_quaternion(self, quat):
        """Convert quaternion to yaw."""
        q = [quat.x, quat.y, quat.z, quat.w]
        _, _, yaw = euler_from_quaternion(q)
        return yaw

    def control_loop(self):
        """Main control loop implementing pure pursuit"""
        if not self.has_received_trajectory:
            return

        if self.current_pose is None:
            if not self.waiting_warned:
                self.get_logger().warn('Waiting for odometry data...')
                self.waiting_warned = True
            return

        robot_x, robot_y, current_yaw = self.current_pose

        # Check if goal is reached
        if not self.goal_reached:
            final_point = self.trajectory[-1]
            distance_to_goal = np.hypot(final_point[0] - robot_x, final_point[1] - robot_y)

            if distance_to_goal < self.goal_tolerance:
                self.goal_reached = True
                self.get_logger().info('Goal reached. Stopping robot.')
                stop_cmd = Twist()
                self.publisher.publish(stop_cmd)
                return  # Exit the control loop
        else:
            return  # Robot has already reached the goal

        # Find closest point
        closest_idx = 0
        min_dist = float('inf')
        for i, point in enumerate(self.trajectory):
            dist = np.hypot(point[0] - robot_x, point[1] - robot_y)
            if dist < min_dist:
                min_dist = dist
                closest_idx = i

        # Find lookahead point
        lookahead_point = None
        for i in range(closest_idx, len(self.trajectory)):
            point = self.trajectory[i]
            distance = np.hypot(point[0] - robot_x, point[1] - robot_y)
            if distance >= self.base_lookahead:
                lookahead_point = point
                break

        if lookahead_point is None:
            lookahead_point = self.trajectory[-1]

        # Calculate target yaw
        dx = lookahead_point[0] - robot_x
        dy = lookahead_point[1] - robot_y
        target_yaw = np.arctan2(dy, dx)

        # Calculate errors
        angular_error = np.arctan2(np.sin(target_yaw - current_yaw),
                                np.cos(target_yaw - current_yaw))

        # Calculate velocities
        linear_velocity = self.base_velocity
        angular_velocity = 2.0 * angular_error

        # Publish command
        cmd = Twist()
        cmd.linear.x = linear_velocity
        cmd.angular.z = angular_velocity
        self.publisher.publish(cmd)

def main(args=None):
    """Entry point for the node."""
    rclpy.init(args=args)
    node = PurePursuitNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        stop_cmd = Twist()
        node.publisher.publish(stop_cmd)
        node.get_logger().info('Shutting down...')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
