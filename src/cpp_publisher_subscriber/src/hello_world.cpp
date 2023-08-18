#include "rclcpp/rclcpp.hpp"


int main(int argc, char *argv[]){
    //Initialize the ros comunication
    rclcpp::init(argc, argv);

    //Create a ROS2 node named hello_world
    std::shared_ptr<rclcpp::Node> node= rclcpp::Node::make_shared("Hello_world");
    //PRINT A MESSAGE TO THE TERMINAL

    //We create a rate object of 1hz
    rclcpp::Rate loop_rate(1);

  // Loop until node is shutdown
    while(rclcpp::ok()){
        RCLCPP_INFO(node->get_logger(),"Hello World---------");


        // sleep to maintan the Rate we set above
        loop_rate.sleep();       


    }

    
    //CREATE A DEFAULT SINGLE-THREADED EXECUTOR AND SPIN THE SPECIFIED NODE
    rclcpp::spin(node);
    //SHUTDOWN THE ROS2 COMMUNICATION
    rclcpp::shutdown();
    return 0;
}