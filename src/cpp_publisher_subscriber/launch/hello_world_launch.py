#hello_world_launch.py
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='cpp_publisher_subscriber', #Package name
            executable='hello_world', #the name of the executable 
            output='screen',#type of output channel
            emulate_tty=True
        )





    ])