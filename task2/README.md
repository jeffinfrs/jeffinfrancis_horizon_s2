# Task 2 – Arduino Simulation

## Description
This project simulates a rover control system using Arduino.

The potentiometer controls the servo motor angle. The servo is limited to 68 degrees. If the input exceeds this limit, an LED turns ON as a warning indicator.

## Components Used
- Arduino Uno
- Servo Motor
- Potentiometer
- LED
- Resistor

## Working
- Potentiometer input is read using analog pin
- Value is converted to angle
- If angle > 68°, servo is restricted
- LED turns ON when limit is exceeded

## Files
- arduino_code.ino → Arduino code
- simulation.png → Working simulation screenshot
