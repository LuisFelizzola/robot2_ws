from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld=LaunchDescription()

    publisher =Node(
        package="publisher_subscriber_r",
        executable="publisher"
    )
    subscriber =Node(
        package="publisher_subscriber_r",
        executable="subscriber"
    )
    ld.add_action(publisher)
    ld.add_action(subscriber)
    return ld