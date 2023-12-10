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
