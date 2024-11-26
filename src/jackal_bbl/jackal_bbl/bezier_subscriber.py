#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_msgs.msg import Float32MultiArray
import numpy as np

class BezierSubscriber(Node):
    def __init__(self):
        super().__init__('bezier_subscriber')
        
        self.subscription = self.create_subscription(
            Float32MultiArray,
            'bezier_trajectory',
            self.trajectory_callback,
            10
        )
        self.get_logger().info('Bezier Subscriber initialized')

    def trajectory_callback(self, msg):
        try:
            # Get the dimensions from the layout
            num_points = msg.layout.dim[0].size
            num_coords = msg.layout.dim[1].size
            
            # Reshape the flat array back into 2D
            trajectory = np.array(msg.data).reshape((num_points, num_coords))
            
            # Log the received trajectory
            self.get_logger().info(f'Received')
            
        except Exception as e:
            self.get_logger().error(f'Error processing trajectory: {str(e)}')

def main(args=None):
    rclpy.init(args=args)
    subscriber = BezierSubscriber()
    
    try:
        rclpy.spin(subscriber)
    except KeyboardInterrupt:
        pass
    finally:
        subscriber.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()