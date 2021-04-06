# Arduino Nano & Ultrasonic Sensor With Touch Button

## Set Up

1. Download the Arduino IDE .exe file from [here](https://www.arduino.cc/en/software).

2. Connect your Arduino to your computer.

3. If your Arduino says in the back CH340G, you need to download another driver for the USB port to be recognized from this [link](http://www.wch.cn/download/CH341SER_EXE.html). More details on this process were taken from [here](https://www.instructables.com/Arduino-Nano-USB-Not-Recognizing-Fix/).

4. On the IDE, go to Tools > Board > Arduino Nano.

5. On the IDE, go to Tools > Processor > ATMega328P.

6. On the IDE, go to Tools > Port > COM4. This port can change, to see which one it takes, go to Device Manager > COM and LPT Ports > USB-SERIAL CH40 (COM4).

### Connection

The breadboard sholud look as below. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session07/media/breadboard.jpg?raw=true) <br />

The sensors both should look as follows. <br />

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session07/media/sensors.jpg?raw=true) <br />

## Run

1. Open the [.ino code](https://github.com/the-other-mariana/circuits-workshop/blob/master/session07/ultrasonic-touch/ultrasonic-touch.ino) that does something.

2. Click on Upload.

3. Open the serial port (console) to see the printed output. This button is on the top right corner.

In this case, the output is "System Turned Off" until you press the touch sensor. Then, the ultrasonic sensor does its job until you press again the touch sensor that acts as a On/Off button.

## Stop

1. Open the [.ino code](https://github.com/the-other-mariana/circuits-workshop/blob/master/session06/null-sketch/null-sketch.ino) that does nothing.

2. Click on Upload.

3. Unplug the arduino.

## Output

![image](https://github.com/the-other-mariana/circuits-workshop/blob/master/session07/media/output.gif)

## Handy Links

- [Setup Nano and Breadboard](https://www.youtube.com/watch?v=lUQlKzOOBjI) <br />

- [Ultrasonic + Nano 1](https://www.youtube.com/watch?v=O4BICS0MlkA) <br />

- [Ultrasonic + Nano 2](https://www.youtube.com/watch?v=K3_dgs_Xk1I) <br />