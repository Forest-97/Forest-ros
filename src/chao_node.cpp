#include <ros/ros.h>
#include <std_msgs/String.h>
#include <qq_msgs/Carry.h>

int main(int argc, char  *argv[])
{
    ros::init(argc,argv,"chao_node");
    printf("olg\n");

    ros::NodeHandle nh;
    ros::Publisher pub=nh.advertise<qq_msgs::Carry>("KuaiShangCheKaiHeiQun",10);

    while (ros::ok())
    {
        printf("我要刷屏了。\n");
        ros::Rate loop_rate(10);
        qq_msgs::Carry msg;
        msg.grade = "王者";
        msg.star = 50;
        msg.data = "国服马超，带飞！\n";
        pub.publish(msg);
        loop_rate.sleep();

    }
    
    return 0;
}
