// pub.cpp
// C++ Header files
#include <chrono>
#include <functional>
#include <memory>
#include <string>
#include <ctime> //Change

//Import the rclcpp client library and std_msgs header
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

//INCLUDE OUR CUSTOM MSG
#include "custom_msg/msg/log_tf.hpp"

using namespace std::chrono_literals;

class PublisherNode: public rclcpp::Node

{
public:
PublisherNode()
: Node("publisher_custom"),count_(0)
{
// Create a Publisher with a custon meessage type called LogTF_msg and queue size is 10
publisher_ =this->create_publisher<custom_msg::msg::LogTf>("LogTF_msg",10); //change
//Create a timer with 500 ms delay
timer_ =this->create_wall_timer(
500ms, std::bind(&PublisherNode::callback,this)
);
}
private:
void callback()
{
custom_msg::msg::LogTf message = custom_msg::msg::LogTf ();
time_t now= time(0);//change
message.time_frame=ctime(&now); //change
message.log_msg="Hello, World "+ std::to_string(count_++);

//PUBLISH THE MESSAGE
publisher_->publish(message); 
}

// Timer objects allow a node to perform a specific action at a specified rate or at a specific time in the future
rclcpp::TimerBase::SharedPtr timer_;
// Publisher
rclcpp::Publisher<custom_msg::msg::LogTf>::SharedPtr publisher_; 

// Variable to count number of message published, size_t is a unsigned variable. Tipically used to store the sizeof()
size_t count_; 

};


int main(int argc, char *argv[]){
// Initialize the ROS2 communication
rclcpp::init(argc, argv);

// Create a default single-threaded executor and spin the PublisherNode node
rclcpp::spin(std::make_shared<PublisherNode>());

rclcpp::shutdown();
return 0;
}




