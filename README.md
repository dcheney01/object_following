<<<<<<< HEAD
# Object Following System

A real-time object tracking and manipulation system that replicates human visual attention mechanisms. Developed for a Neuromechanics class, this project demonstrates autonomous object tracking using computer vision and servo-controlled pan-tilt mechanisms.

## Project Overview

This system combines advanced computer vision with mechanical control to create an autonomous object tracking device. The ultimate goal is to leverage visual feedback for controlling humanoid soft robots in object manipulation tasks.

**[View Project Presentation](https://sites.google.com/view/danielcheney/portfolio/object-following)**  
**[Watch Demo Video](https://youtu.be/zmI6Sb6QFVg)**

## Key Features

### Object Detection with YOLOv8
- Real-time object detection using state-of-the-art YOLOv8 model
- Robust performance across various lighting conditions
- Multi-sensor data collection using ZED2 camera and Google Pixel smartphone
- Specialized handling for challenging objects (furniture, tools, etc.)

### Proportional Control System
- Real-time pitch and yaw angle control
- Centers detected objects within camera field of view
- Setpoint determination based on bounding box center coordinates
- Low-latency control loop for smooth tracking performance

### Hardware Integration
- **Arduino Microcontroller**: Processes control signals and interfaces with servo motors
- **Dual Servo Motors**: Provide 2-DOF pan-tilt motion capability
- **ZED2 Camera**: High-quality stereo vision for object detection and depth sensing
- **3D Printed Mount**: Custom-designed, entirely 3D printed pan-tilt mechanism

## Technologies Used

- **YOLOv8** for real-time object detection
- **OpenCV** for computer vision processing
- **Arduino** for embedded control
- **Python** for main control logic
- **ZED SDK** for camera integration
- **3D Printing** for mechanical components

## Applications

- Robotics research and development
- Autonomous surveillance systems
- Human-robot interaction studies
- Educational demonstrations in control theory
- Foundation for soft robot manipulation systems

## Project Structure

- `src/` - Main source code for object detection and control
- `data/` - Training data and detection models
- `runs/` - Experiment results and performance logs

This project demonstrates the integration of modern computer vision techniques with traditional control theory to create responsive, intelligent tracking systems.
=======
# object_following
# Neuromechanics Project: Object Tracking and Manipulation

This project, developed for a Neuromechanics class, aims to replicate human visual attention to objects within the environment. The ultimate goal is to leverage visual feedback to control a humanoid soft robot for the manipulation of large objects. For a more in-depth exploration of the project background, refer to the [presentation slides](https://sites.google.com/view/danielcheney/portfolio/object-following).

## Object Detection with YOLOv8

The project utilizes YOLOv8 for object detection, with data collected using a ZED2 camera and a Google Pixel smartphone. The object detection performed well even in challenging lighting conditions, except for the stool, which presented challenges due to its dependence on the background.

## Control Mechanism

The project implements a proportional controller for pitch and yaw angles, with the objective of keeping the center of the detected object's bounding box in the center of the image. The setpoint is determined based on the center of the bounding box.

## Hardware Setup

The control signals for angle changes are sent to an Arduino, which, in turn, interfaces with two servo motors, providing the device with two degrees of freedom. The pan and tilt model, adapted to hold a ZED2 camera and work seamlessly with the servo motors, is entirely 3D printed.

## Video Showcase

Check out the project in action in [this video](https://youtu.be/zmI6Sb6QFVg).
>>>>>>> a7608b8635e2bf5d789b6277ed42a35d87ecd448
