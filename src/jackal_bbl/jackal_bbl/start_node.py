import sys

import rclpy
from rclpy.node import Node
import numpy as np
from functools import partial
from std_msgs.msg import Float32MultiArray, MultiArrayDimension, MultiArrayLayout
class BezierNode(Node):
    def __init__(self):
        super().__init__('start_node')
        
        # Create sample points for the Bezier curve
        self.points = np.array([
            #TODO need to integrate current location and goal with REPLANNING
            [0.0, 0.0],
            [1.0, 1.0],
            [2.0, 1.0],
            [3.0, 1.0],
            [4.0, 0.0]
        ])
        self.publisher = self.create_publisher(Float32MultiArray, 'bezier_trajectory', 10)
        
        # Create timer for periodic computation
        self.timer = self.create_timer(1.0, self.compute_bezier)
        self.get_logger().info('Bezier Node initialized')

    def compute_bezier(self):
        """Callback to compute and publish the Bezier curve points"""
        try:
            from sdf_marching.bezier import BezierPolynomial
            # Create Bezier polynomial
            bp = BezierPolynomial(self.points)
            
            # Generate points along the curve
            times = np.linspace(0., 1.0, 100)
            traj = bp.query(times)

            # Debugging: Log data shapes and types
            self.get_logger().info(f"Control Points (type: {type(self.points)}): {self.points}")
            self.get_logger().info(f"Bezier Trajectory (type: {type(traj)}): {traj}")

            if traj is None or len(traj) == 0:
                self.get_logger().error("Bezier trajectory is empty or None.")
                return
            #TODO show in gazebo
            # Create the Float32MultiArray message
            msg = Float32MultiArray()
            
            # Convert numpy array to flat list of floats
            msg.data = traj.flatten().tolist()
            
            # Set up the layout
            msg.layout = MultiArrayLayout()
            msg.layout.dim = [
                MultiArrayDimension(label="points", size=traj.shape[0], stride=traj.shape[0] * traj.shape[1]),
                MultiArrayDimension(label="coordinates", size=traj.shape[1], stride=traj.shape[1])
            ]
            
            # Publish the message
            self.publisher.publish(msg)
            self.get_logger().info('Published Bezier trajectory')
        except Exception as e:
            self.get_logger().error(f'Error computing Bezier curve: {str(e)}')

def main(args=None):
    rclpy.init(args=args)
    node = BezierNode()
    
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()