# Circuits Workshop

Experiments in c with raspberry and arduino. <br />

## Raspberry Pi 3

Documentation: [WiringPi Core Functions](http://wiringpi.com/reference/core-functions/) <br />

Wiring Pi Pinout:

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/pinout_wiringPi.png?raw=true) <br />

### Resources

1. Raspbian OS `.img` file.
2. SD Card Formatter 0500 `.exe` file.
3. VNC Viewer 6.18.907 for Windows 64bit `.exe` file.
4. win32diskimager 1.0.0 install `.exe` file.

## Turn On Your Raspberry

1. You need to go to `Control Panel > Networks & Internet > Network Connections`. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/media/network-path.png?raw=true) <br />

2. Click on `Ethernet` option.<br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/media/red.png?raw=true) <br />

3. Double click on `TCP/IPv4` option.<br />
4. Instead of Automatic IP, choose Fixed IP Address.<br />
5. Configure it as follows: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/media/fixed-ip.png?raw=true) <br />

6. Accept changes.<br />
7. Put a microSD card (OS) inside the Raspberry.<br />
8. Connect a universal-USB cable from the Raspberry to your computer.<br />
9. Connect an Ethernet cable from the Raspberry to your computer.<br />
10. Open `VNC Viewer For Windows` (v6.18.907).<br />
11. Choose the IP address of your Raspberry, in this case `192.168.0.144`.<br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/vnc.png?raw=true) <br />

12. In VNC you will see the Raspberry's screen projected.

*Note: Operating System inside the microSD Memory (32GB) is Linux Raspbian.* <br /> 

## Compile & Run Codes From Raspberry

Through the terminal, go to the folder's directory where the source code is and type: <br />

### To Compile

```
& gcc codename.c -o outputname -lwiringPi
```

### To Run

```
& sudo ./outputname
```

## Turn Off Your Raspberry

1. Click the Raspberry Icon. <br />
2. Click on Shutdown. <br />
3. Close VNC Viewer. <br />
4. Wait a few seconds and unplug the Ethernet and the Universal cables. <br />
5. In your computer, go back to `Control Panel > Networks & Internet > Network Connections`. <br />
6. Choose Automatic IP Address again. <br />

## Content

### [Session 01](https://github.com/the-other-mariana/circuits-workshop/tree/master/session01) Led Blink

Small code that makes a led blink with a constant delay. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/output-blink.gif) <br />

### [Session 02](https://github.com/the-other-mariana/circuits-workshop/tree/master/session02) Touch Sensor & Led

Small code that makes a led turn on while pressing a touch sensor. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session02/images/output-gif.gif) <br />

### [Session 03](https://github.com/the-other-mariana/circuits-workshop/tree/master/session03) Passive Buzzer Plays Music Notes

Small code that sends a frequency number as voltage to a buzzer to make it play different notes. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/output-gif.gif) <br />

### [Session 04](https://github.com/the-other-mariana/circuits-workshop/tree/master/session04) Temperature Printed in Console

Small code that prints in the console the Relative Humidity (%) and Temperature (°C and °F). <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/temp-gif.gif) <br />

### [Session 05](https://github.com/the-other-mariana/circuits-workshop/tree/master/session05) Led Switch with Touch Sensor

Code that makes a led light switch on and off using a touch sensor as input. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/switch-gif.gif) <br />
