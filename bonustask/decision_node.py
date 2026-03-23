import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32, String

class DecisionNode(Node):
    def __init__(self):
        super().__init__('decision_node')
        self.subscriber_ = self.create_subscription(Int32, '/distance', self.decision_callback, 10)
        self.publisher_ = self.create_publisher(String, '/rover_command', 10)

    def decision_callback(self, msg):
        distance = msg.data
        command = 'MOVE_FORWARD' if distance >= 30 else 'STOP'
        cmd_msg = String()
        cmd_msg.data = command
        self.publisher_.publish(cmd_msg)
        self.get_logger().info(f'Distance received: {distance} | Command published: {command}')

def main(args=None):
    rclpy.init(args=args)
    node = DecisionNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
