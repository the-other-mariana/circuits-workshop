# Circuits Workshop

Experiments in c with raspberry and arduino. <br />

## Raspberry Pi 3

[WiringPi Core Functions](http://wiringpi.com/reference/core-functions/) <br />

Wiring Pi Pinout:

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/pinout_wiringPi.png?raw=true) <br />

### Turn On Your Raspberry

1. You need to go to `Control Panel > Networks & Internet > Network Connections`.
2. Click on `Ethernet` option.
3. Double click on `TCP/IPv4` option.
4. Instead of Automatic IP, choose Fixed IP Address.
5. Configure it as follows: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/media/fixed-ip.png?raw=true) <br />

6. Accept changes.<br />
7. Put a microSD card (OS) inside the Raspberry.<br />
8. Connect a universal-USB cable from the Raspberry to your computer.<br />
9. Connect an Ethernet cable from the Raspberry to your computer.<br />
10. Open `VNC Viewer For Windows` (v6.18.907).<br />
11. Choose the IP address of your Raspberry, in this case `192.168.0.144`.<br />
12. In VNC you will see the Raspberry's screen projected.

## Content

### [Session 01](https://github.com/the-other-mariana/circuits-workshop/tree/master/session01) Led Blink

Small code that makes a led blink with a small delay. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/output-blink.gif) <br />

### [Session 02](https://github.com/the-other-mariana/circuits-workshop/tree/master/session02) Touch Sensor & Led

Small code that makes a led turn on when you press a touch sensor. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session02/images/output-gif.gif) <br />