# Firmware Internship Assignmnet for Greendzine Technologies
## Arduino LM35 Temperature Sensor Interface
### Description
This project demonstrates how to interface an LM35 temperature sensor with an Arduino Uno and control the onboard LED based on temperature readings. The Arduino Uno reads the analog output of the LM35 sensor, calculates the temperature, and adjusts the blinking pattern of the onboard LED accordingly.
### Features
* Interfacing LM35 temperature sensor with Arduino Uno.
* Controlling onboard LED based on temperature readings.
* Adjustable LED blink intervals for different temperature thresholds.
* Serial communication for displaying temperature readings.
### Hardware Requirements
* Arduino Uno
* LM35 temperature sensor
* Jumper wires
### Installation
Connect the LM35 temperature sensor to the Arduino Uno as follows:
* LM35 VCC pin to Arduino 5V pin
* LM35 OUT pin to Arduino Analog pin A0
* LM35 GND pin to Arduino GND pin
* Upload the provided Arduino sketch to the Arduino Uno board using the Arduino IDE.
### Usage
* Open the Arduino IDE and select the appropriate board and port.
* Upload the sketch to the Arduino Uno.
* Open the Serial Monitor to view temperature readings.
* Observe the onboard LED blinking pattern change based on temperature:
* If the temperature falls below 30 degrees Celsius, the LED blinks every 250 milliseconds.
* If the temperature rises above 30 degrees Celsius, the LED blinks every 500 milliseconds.
