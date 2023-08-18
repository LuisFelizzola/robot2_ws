// sub.cpp
// C++ Header files

#include <memory>




<<<<<<< HEAD

=======
>>>>>>> f181727 (Updated code)
//Import the rclcpp client and std_msgs header
#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

//Creation of fuction objects with placeholder arguments
using std::placeholders::_1;


//Subscribers composition
//We create a subscriber node that inherits from the reclcpp:Node
class SubscriberNode: public rclcpp::Node
{

    public:

        SubscriberNode(): Node("subscriber")
        {
            //Create a subscriber with a String Meesage type and queue size is 10, using the methodcreate subscriptio
            subscription_=this->create_subscription<std_msgs::msg::String>(
                "string_msg",10,std::bind(&SubscriberNode::callback,this,_1)
            );

            RCLCPP_INFO(this->get_logger(),"SUBSCRIPTION STARTING...");

        }
    private: 
        //the moment the message availabre in the queue and the call back execute the print statement

        void callback(const std_msgs::msg::String::SharedPtr msg) const{
            RCLCPP_INFO(this->get_logger(),"I heard: '%s' ", msg->data.c_str());

        }

        //subscriber
        rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscription_;

};






int main(int argc, char *argv[]){

  // Initialize the ROS2 communication
    rclcpp::init(argc,argv);
    //create a default single_threaded executor and spin the subscriber node
    rclcpp::spin(std::make_shared<SubscriberNode>());

    rclcpp::shutdown();
    return 0;
}