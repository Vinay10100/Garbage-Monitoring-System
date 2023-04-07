# Garbage Monitoring System 

The Garbage Monitoring System is a smart waste management solution that uses an ultrasonic sensor to detect the level of garbage in a bin and indicates it using three levels of LED light. It has a real-time monitoring feature, and when the bin is full, it triggers a buzzer to alert the user. Additionally, it displays the garbage level on an LCD screen.

# Requirements
> ### Hardware Specifications
    1.	Arduino Mega 2500 board
    2.	Ultrasonic Sensor HC-SR04
    3.	ESP8266 (ESP-01) Wi-Fi Module
    4.	Breadboard
    5.	Jumper Wires
    6.	Dustbins
    7.	Buzzer
    8.	LED lights
    9.	LCD screen
> #### Software Specifications
    1.  Arduino
    
# Working of Project

* The Garbage Monitoring System uses an ultrasonic sensor to detect the garbage level in the bin.
* The ultrasonic sensor emits a high-frequency sound wave that bounces off the surface of the garbage and returns to the sensor.
* The time taken for the sound wave to return is measured by the sensor to calculate the distance between the sensor and the garbage.
* The system measures the distance and converts it into a percentage value of the garbage level.
* The garbage level is indicated using three levels of LED lights - green for less than 50%, yellow for 50-75%, and red for 75-100%.
* The garbage level is also displayed on an LCD screen.
* When the garbage level reaches 100%, the system triggers a buzzer to alert the user that the bin needs to be emptied.
* The ESP8266 Wi-Fi module enables real-time monitoring of the garbage level and allows the system to be connected to the internet.
* The garbage level can be monitored remotely using a web application.
