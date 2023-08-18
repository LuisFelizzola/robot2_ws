//Import the rclcpp client and std_msgs header
#include "rclcpp/rclcpp.hpp"

//INCLUDE OUR CUSTOM MSG
#include "custom_msg/msg/log_tf.hpp"

//Creation of fuction objects with placeholder arguments
using std::placeholders::_1;

//Subscribers composition
//We create a subscriber node that inherits from the reclcpp:Node
class SubscriberNode: public rclcpp::Node
{

public:

SubscriberNode(): Node("subscriber_custom")
{
    //Create a subscriber with a String Meesage type and queue size is 10, using the methodcreate subscriptio
    subscription_=this->create_subscription<custom_msg::msg::LogTf>(
    "LogTF_msg",10,std::bind(&SubscriberNode::callback,this,_1)
);

}
private: 
//the moment the message availabre in the queue and the call back execute the print statement

void callback(const custom_msg::msg::LogTf::SharedPtr msg) const{
    RCLCPP_INFO(this->get_logger(),"I heard: '%s' ", msg->time_frame.c_str());
    RCLCPP_INFO(this->get_logger(),"'%s' ", msg->log_msg.c_str()); //change

}

//subscriber
rclcpp::Subscription<custom_msg::msg::LogTf >::SharedPtr subscription_;

};





int main(int argc, char *argv[]){

// Initialize the ROS2 communication
rclcpp::init(argc,argv);
//create a default single_threaded executor and spin the subscriber node
rclcpp::spin(std::make_shared<SubscriberNode>());

rclcpp::shutdown();
return 0;
}

