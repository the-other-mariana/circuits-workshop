# Vibration Motor Triggering With Ultrasonic Sensor Array

This is a program that uses an array to store the distance of objects captured by an array of ultrasonic sensors, and whenever a captured distance is smaller that the tolerated distance, its corresponding vibration motor vibrates for two seconds. 

## Specifications

- Arduino Board: `Arduino Nano`
- Processor: `ATMega328P`
- Chip for USB Driver: `CH340G`
- Sensor: `Ultrasonic Sensor HC-SR04` x3
- Sensor: `Touch Sensor TTP223B` x1
- Motor: `Vibration Motor` x3

### Vibration Motor

There are many options for these motors, but the ones used are the following. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session09/media/motors.jpg?raw=true) <br />

# Wiring

The complete wiring of the system should look as below. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session09/media/wiring.png?raw=true) <br />

## Run

1. Open the [.ino code](https://github.com/the-other-mariana/circuits-workshop/blob/master/session09/ultrasonic-array-vibration/ultrasonic-array-vibration.ino) that implements the solution.

2. Click on Upload.

3. Open the serial port (console) to see the printed output. This button is on the top right corner.

In this case, the output is "System Turned Off" until you press the touch sensor. Then, the ultrasonic sensor array (size 3) does its job in order to activate the vibration motors until you press again the touch sensor that acts as a On/Off button.

## Stop

1. Touch the button to turn off the sensor processing.

2. Unplug the Arduino.

## Output

The wired project looks as below. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session09/media/wired.jpg?raw=true) <br />

And the output works as the following sample. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session09/media/sample.gif)