#ROS CLIENT LIBRARY FOR PYTHON
import rclpy 

#HANDLES THE CREATION OF NODES
from rclpy.node import Node


#ENABLE USAGE OF THE STRING MESSAGE TYPE
from std_msgs.msg import String

#create a minimalpublisher class which is a subclass of the node class
class MinimalPublisher(Node):
    def __init__(self):
        super().__init__('minimal_publisher') #initialize the node class
        #create a publsiher with a String msg and the topic name "addison" with 10 of qos
        self.publisher_=self.create_publisher(String, 'addison',10)

        timer_period=0.5 #the period of time we'll publish the msg

        self.timer=self.create_timer(timer_period,self.timer_callback)


        #initialize a counter variable
        self.i=0
    
    def timer_callback(self):
        #this fuction gets called every 0.5

        msg= String() #create a String msg

        #set the message's data
        msg.data= "Hi automatic Addison: %d" %self.i

        #Publish the message to the topic
        self.publisher_.publish(msg)

        #display the msg on the console

        self.get_logger().info('Publishing: "%s" '%msg.data)

        #increment the counter by 1
        self.i +=1

def main(args=None):
    #initialize the rclpy library
    rclpy.init(args=args)

    #Create the node
    minimal_publisher=MinimalPublisher()

    #Spin the node so the call back fuction is called

    rclpy.spin(minimal_publisher)

    #destroy the node explicity
    minimal_publisher.destroy_node()


    #shutdown the ROS client library for python
    rclpy.shutdown()


if __name__=="__main__":
    main()
