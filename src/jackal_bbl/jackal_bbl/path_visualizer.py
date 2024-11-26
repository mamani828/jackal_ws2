#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
import numpy as np
from nav_msgs.msg import Path
from geometry_msgs.msg import PoseStamped
from std_msgs.msg import Float32MultiArray
from rclpy.qos import QoSProfile, ReliabilityPolicy, HistoryPolicy

class PathVisualizer(Node):
    def __init__(self):
        super().__init__('path_visualizer')
        
        # Configure QoS profile
        qos_profile = QoSProfile(
            reliability=ReliabilityPolicy.RELIABLE,
            history=HistoryPolicy.KEEP_LAST,
            depth=10
        )
        
        # Create a publisher for the path
        self.path_pub = self.create_publisher(
            Path,
            'visualization_path',
            qos_profile
        )
        
        # Subscribe to your numpy array topic
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'bezier_trajectory',
            self.callback,
            qos_profile
        )
        
        # Initialize an empty path message
        self.path = Path()
        #todo is to fix this
        self.path.header.frame_id = "base_link"
        self.create_timer(1.0, self.debug_callback)
        
    def debug_callback(self):
        # Log current time and frame information
        self.get_logger().info('Publishing path with frame_id: {}'.format(self.path.header.frame_id))
        
    def callback(self, data):
        # Reshape numpy array - each row is [x, y]
        np_array = np.array(data.data).reshape(-1, 2)
        
        # Clear previous path
        self.path.poses = []
        
        # Convert numpy points to path message
        for point in np_array:
            pose = PoseStamped()
            # Use the same frame_id as the path
            pose.header.frame_id = self.path.header.frame_id
            pose.header.stamp = self.get_clock().now().to_msg()
            
            # Set position (z=0 for floor plane)
            pose.pose.position.x = float(point[0])
            pose.pose.position.y = float(point[1])
            pose.pose.position.z = 0.0
            pose.pose.orientation.x = 0.0
            pose.pose.orientation.y = 0.0
            pose.pose.orientation.z = 0.0
            pose.pose.orientation.w = 1.0
            
            self.path.poses.append(pose)
        
        # Update path timestamp
        self.path.header.stamp = self.get_clock().now().to_msg()
        
        # Publish the path
        self.path_pub.publish(self.path)

def main(args=None):
    rclpy.init(args=args)
    path_visualizer = PathVisualizer()
    
    try:
        rclpy.spin(path_visualizer)
    except KeyboardInterrupt:
        pass
    finally:
        path_visualizer.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
