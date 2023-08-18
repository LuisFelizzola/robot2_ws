
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
    Node(
    package="publisher_subscriber_custom_msg",
    executable="publisher_custom",
    output="screen",
    emulate_tty=True),
    Node(
    package="publisher_subscriber_custom_msg",
    executable="subscriber_custom",
    output="screen",
    emulate_tty=True),
])

