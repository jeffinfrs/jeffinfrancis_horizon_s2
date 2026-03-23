 ROS2 ROVER COMMAND NODE

#FDescription

This task extends Level 3 ROS2 by adding decision making and rover commands:  

**Sensor Node** - publishes random distance values every second on `/distance`. 

**Decision Node** - subscribes to `/distance` and decides rover movement: 

  - Distance < 30 → STOP
   
  - Distance ≥ 30 → MOVE_FORWARD
    
  - Publishes command to `/rover_command`.
      
**Command Listener Node** - subscribes to `/rover_command` and prints the command.

#Architecture

Sensor Node → /distance → Decision Node → /rover_command → Command Listener Node

#Example output

-Sensor node terminal:

[INFO] [sensor_node]: Distance published: 22
[INFO] [sensor_node]: Distance published: 55

-Decision node terminal:

[INFO] [decision_node]: Distance received: 22 | Command published: STOP
[INFO] [decision_node]: Distance received: 55 | Command published: MOVE_FORWARD

-Command listener node terminal:

[INFO] [command_listener_node]: Received command: STOP Rover wheels moving…
[INFO] [command_listener_node]: Received command: MOVE_FORWARD Rover wheels moving…

#Files


#How to run

1. Open Ubuntu terminal (ROS2 Humble installed).

2.Terminal 1 – run Sensor Node:

```bash
python3 sensor_node.py
```
3.Terminal 2 - run decision node:

```bash
python3 decision_node.py
```

4.Terminal 3 - run command listener node:

```bash
python3 command_listener_node.py
```
