# Arduino Nano & Ultrasonic Sensor Array

This is a small program uses 3 ultrasonic sensors, and each of the obstacle's distances caught by the sensors is stored in an array for further handling. It also uses a touch sensor as a On/Off button that starts the sensor processing or stops it.

## Specifications

- Arduino Board: `Arduino Nano`
- Processor: `ATMega328P`
- Chip for USB Driver: `CH340G`
- Sensor: `Ultrasonic Sensor HC-SR04` x3
- Sensor: `Touch Sensor TTP223B` x1

## Connection

The breadboard sholud look as below. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session08/media/breadboard.jpg?raw=true) <br />

The idea behind this is to make the looping easier by having the following pin configuration:
	
- **Triggers**: pins D02, D03, D04.
- **Echoes**: pins D05, D06, D07.
- **Signal for Touch Sensor**: pin D11.

Both GND arduino pins are used, where each of them passes ground to two sensor GND pins. The 5V power pin is used for all sensor VCC pins, two connected directly and the remaining two connected by bridging the 5V current from the Arduino to other breadboard row using a Male-Male dupont cable.

The sensors both should look as follows. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session08/media/sensors.jpg?raw=true) <br />

## Run

1. Open the [.ino code](https://github.com/the-other-mariana/circuits-workshop/blob/master/session08/ultrasonic-array/ultrasonic-array.ino) that does something.

2. Click on Upload.

3. Open the serial port (console) to see the printed output. This button is on the top right corner.

In this case, the output is "System Turned Off" until you press the touch sensor. Then, the ultrasonic sensor array (size 3) does its job until you press again the touch sensor that acts as a On/Off button.

## Stop

1. Touch the button to turn off the sensors.

2. Unplug the Arduino.

## Output

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session08/media/output.gif)
