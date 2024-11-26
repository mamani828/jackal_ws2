#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import numpy as np

class BezierServer(Node):
    def __init__(self):
        super().__init__('bezier_server_node')
        self.srv = self.create_service(
            BezierService,
            'bezier_service',
            self.handle_array
        )
        self.get_logger().info('Bezier service is ready')
        
    def handle_array(self, request, response):
        """Handle incoming array service requests."""
        try:
            # Convert list back to numpy array
            received_points = np.array(request.points)
            self.get_logger().info(f'Received array with shape: {received_points.shape}')
            
            # Process the points here
            # Add your Bezier curve calculation logic
            
            response.success = True
            response.message = "Successfully processed points"
            
        except Exception as e:
            response.success = False
            response.message = f"Error processing array: {str(e)}"
            
        return response

def main():
    rclpy.init()
    server_node = BezierServer()
    
    try:
        rclpy.spin(server_node)
    except KeyboardInterrupt:
        pass
    finally:
        server_node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()