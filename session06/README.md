# Arduino Nano

## Set Up

1. Download the Arduino IDE .exe file from [here](https://www.arduino.cc/en/software).

2. Connect your Arduino to your computer.

3. If your Arduino says in the back CH340G, you need to download another driver for the USB port to be recognized from this [link](http://www.wch.cn/download/CH341SER_EXE.html). More details on this process were taken from [here](https://www.instructables.com/Arduino-Nano-USB-Not-Recognizing-Fix/).

4. On the IDE, go to Tools > Board > Arduino Nano.

5. On the IDE, go to Tools > Processor > ATMega328P.

6. On the IDE, go to Tools > Port > COM4. This port can change, to see which one it takes, go to Device Manager > COM and LPT Ports > USB-SERIAL CH40 (COM4).

## Run

1. Open the .ino code that does something.

2. Click on Upload.

3. Open the serial port (console) to see the printed output. This button is on the top right corner.

## Stop

1. Open the .ino code that does nothing.

2. Click on Upload.

3. Unplug the arduino.