#! /usr/bin/env python
import rospy
from geometry_msgs.msg import Twist
from sensor_msgs.msg import Joy

# This ROS Node converts Joystick inputs from the joy node
# into commands for turtlesim or any other robot

# Receives joystick messages (subscribed to Joy topic)
# then converts the joysick inputs into Twist commands
# axis 1 aka left stick vertical controls linear speed
# axis 0 aka left stick horizonal controls angular speed
def callback(data):
    twist = Twist()
    twist.linear.x = 4*data.axes[7]
    twist.angular.z = 4*data.axes[6]
    pub.publish(twist)

# Intializes everything
def start():
    # publishing to "/cmd_vel" to control bot
    global pub
    pub = rospy.Publisher('cmd_vel', Twist)
    # subscribed to joystick inputs on topic "joy"
    rospy.Subscriber("joy", Joy, callback)
    # starts the node
    rospy.init_node('control_node')
    rospy.spin()

if __name__ == '__main__':
    start()