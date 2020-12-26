# DHT11 Temperature & Humidity Sensor

Simple code in c that outputs to the terminal the humidity and temperature from a DHT11 sensor connected to the Raspberry Pi 3. <br />

## Specifications

Language: `C`<br />
Sensor: `DHT11` or `ARD-360` <br />

## Set Up

The DHT11 Sensor looks as follows: <br />

<div>
<img src="https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/DHT11.jpg" height="200"/>
</div>
<br />

The sensor DHT11 must be set up in the protoboard as shown below. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/dht11-setup.jpg?raw=true) <br />

Then, connect the cables to the Raspberry pins as follows. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/rasp-setup.jpg?raw=true) <br />

The set up must finish when the system looks as the diagram below: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/rasp-diagram.png?raw=true) <br />

## Usage

### To Compile

```
& gcc blink.c -o outputname -lwiringPi
```

### To Run

```
& sudo ./outputname 
```

## Output

Finally, after running the program, it prints the output (Relative Humidity in % and Temperature in C and F). <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/output-cmd.png?raw=true) <br />

Looking as follows. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session04/images/temp-gif.gif) <br />

## Links

[DHT11 Tutorial](https://www.circuitbasics.com/how-to-set-up-the-dht11-humidity-sensor-on-the-raspberry-pi/) <br />