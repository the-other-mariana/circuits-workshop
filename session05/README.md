# Led Switch using Touch Sensor

Small code that creates the dynamic of a switch that turns on and off the light of a led. <br />

## Specifications

Raspberry: `Raspberry Pi 3 Model B` <br />
Language: `C` <br />
Sensor: `Touch Sensor TTP223B` <br />

## Set Up

The touch sensor must look as the following: <br />

<div>
<img src="https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/touch-sensor.jpg" height="200"/>
</div>
<br />

The touch sensor must be connected to the protoboard using Dupont male-female cables. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/sensor-setup.jpg?raw=true) <br />

Then, the protoboard will need to have the led connected alongside the sensor as follows: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/switch-proto.jpg?raw=true) <br />

And finally, the Raspberry pins must be connected as shown below. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/rasp-setup-switch.jpg?raw=true) <br />

## Usage

### To Compile

```
& gcc switch-led.c -o outputname -lwiringPi
```

### To Run

```
& sudo ./outputname
```

## Output

The switching led light worked as shown below. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session05/images/switch-gif.gif) <br />