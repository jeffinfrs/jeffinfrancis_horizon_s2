HORIZON CUSAT RECRUITMENT TASKS

#Name

Jeffin Francis

#Repository

This repository contains my submission for the Horizon CUSAT Software Team recruitment tasks.

#Completed Tasks

-Task 1 – Software (C Program)

Calculates distance and travel time for a rover

Includes error handling and motion logic

-Task 2 – Arduino Simulation

Servo controlled using potentiometer

Servo limited to 68°

LED indicates when limit is exceeded

-Task 3 – ROS2

Publisher node sends random distance values every second on `/distance`

Subscriber node receives and prints distance values

Ubuntu 22.04 and ROS2 Humble used

-Bonus task -  ROS2 ROVER COMMAND NODE

**Sensor Node** - publishes random distances `/distance`  

**Decision Node** - subscribes to `/distance` and publishes `/rover_command`

 #Distance < 30 - STOP
 
 #Distance ≥ 30 - MOVE_FORWARD
 
**command listener node** - subscribes to `/rover_command` and prints commands

Demonstrates communication: Sensor → Decision → Command Listener nodes

#Structure

task1/- C program + output

task2/ - Arduino code + simulation

task3/ - install Ros2 Humble + run publisher and subsciber nodes

bonustask/ - run sensor node, decision node and command listener node 
