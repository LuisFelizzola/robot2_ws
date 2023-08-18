#hello_world_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="cpp_publisher_subscriber",
            executable="publisher",
            output="screen",
            emulate_tty=True),
        
        Node(
            package="cpp_publisher_subscriber",
            executable="subscriber",
            output="screen",
            emulate_tty=True),
    ])