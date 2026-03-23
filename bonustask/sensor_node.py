import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32
import random
import time

class SensorNode(Node):
    def __init__(self):
        super().__init__('sensor_node')
        self.publisher_ = self.create_publisher(Int32, '/distance', 10)
        self.timer = self.create_timer(1.0, self.publish_distance)

    def publish_distance(self):
        distance = random.randint(10, 100)
        msg = Int32()
        msg.data = distance
        self.publisher_.publish(msg)
        self.get_logger().info(f'Distance published: {distance}')

def main(args=None):
    rclpy.init(args=args)
    node = SensorNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
