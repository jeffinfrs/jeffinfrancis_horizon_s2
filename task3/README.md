# Task 3 – ROS2 Publisher & Subscriber

## Description
This task demonstrates communication between two ROS2 nodes using a publisher and a subscriber.

## Environment
- Ubuntu 22.04 (Virtual Machine)
- ROS2 Humble installed

## Publisher Node
- Publishes random distance values every second on topic `/distance`
- Represents rover sensor readings

## Subscriber Node
- Subscribes to `/distance` topic
- Prints received distance values to terminal

## Example Output
Publisher:
Publishing: 23  
Publishing: 67  
Publishing: 12  

Subscriber:
Received distance: 23  
Received distance: 67  
Received distance: 12  

> ⚠️ Note: The numbers will vary each run, as they are random.

## Files
- `publisher.py` → ROS2 publisher node  
- `subscriber.py` → ROS2 subscriber node  
- `output.png` → Screenshot showing Ubuntu, ROS2, and running nodes

## How to Run
1. Open Terminal 1 → run publisher:
```bash
python3 publisher.py
