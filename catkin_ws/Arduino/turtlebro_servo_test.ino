#include <ros.h>
#include <std_msgs/UInt16.h>
#include <Servo.h> 

Servo servo44;
Servo servo45;

class NewHardware : public ArduinoHardware
{
  public:
  NewHardware():ArduinoHardware(&Serial1, 115200){};
};

ros::NodeHandle_<NewHardware>  nh;

void servo44_cb( const std_msgs::UInt16& cmd_msg){
  servo44.write(cmd_msg.data);  
}
void servo45_cb( const std_msgs::UInt16& cmd_msg){
  servo45.write(cmd_msg.data);  
}


ros::Subscriber<std_msgs::UInt16> servo44_sub("servo44", servo44_cb);
ros::Subscriber<std_msgs::UInt16> servo45_sub("servo45", servo45_cb);

void setup() {
  servo44.attach(44);
  servo45.attach(45);

  nh.initNode();
  nh.subscribe(servo44_sub);
  nh.subscribe(servo45_sub);
}

void loop() {
  nh.spinOnce();
  delay(1);
}
