#include <ros/ros.h>
#include <std_msgs/String.h>

int main(int argc, char  *argv[])
{
    ros::init(argc,argv,"yao_node");
    printf("瑶的节点\n");

    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<std_msgs::String>("QiuDai",10);
    while (ros::ok())
    {
        printf("我要刷屏了。\n");
        ros::Rate loop_rate(10);
        std_msgs::String msg;
        msg.data = "上车++！\n";
        pub.publish(msg);
        loop_rate.sleep();

    }
    
    return 0;
}
