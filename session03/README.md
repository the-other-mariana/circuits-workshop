# Session 03

Small code that sends a frequency number to a buzzer to make a sound of the 8 octaves. <br />

## Notes

The zero octave goes as follows: <br />

```c
freqs["DO"]= 16.35;
freqs["RE"]= 18.35; 
freqs["MI"]= 20.60;
freqs["FA"]= 21.83;
freqs["SOL"]= 24.50;
freqs["LA"]= 27.50;
freqs["SI"]= 30.87;
freqs["DO#"] = 17.32;
freqs["REB"] = 17.32;
freqs["RE#"] = 19.45;
freqs["MIB"] = 19.45;
freqs["MI#"]= 21.83;
freqs["FAB"]= 20.60;
freqs["FA#"] = 23.12;
freqs["SOLB"] = 23.12;
freqs["SOL#"] = 25.96;
freqs["LAB"] = 25.96;
freqs["LA#"] = 29.14;
freqs["SIB"] = 29.14;
freqs["O"] = 0;
```

For, example to reach the 4th octave of DO: <br />

```c
number = freqs["DO"]*(2^(4));
```

And the softTone.h library converts that number to voltage, which is then sent to the S pin (extreme  pin) of the buzzer. <br />

All programs in the Raspberry control SIGNAL (S pin) of the components. The other two pins left are: the ground pin (- pin) and the vcc pin (5v power pin), which are never included in the programs we make because they are 'default'-ishly connected to the Raspberry and protoboard. <br />

## Specifications

Raspberry: `Raspberry Pi 3` <br />
Language: `C` <br />
Passive Buzzer Model: `ARD-356` <br />

## Set Up

The buzzer looks like the following: <br />

<div>
<img src="https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/ARD-356.jpg" height="200"/>
</div>
<br />

The Raspberry looks as the following: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/rasp-buzzer.jpg?raw=true) <br />

The protoboard is connected as below: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/proto-buzzer.jpg?raw=true) <br />

The buzzer is connected as follows: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/buzzer.jpg?raw=true) <br />

## Usage

### To Compile

```
& gcc buzzer.c -o buzzer -lwiringPi -lpthread
```

### To Run

```
& sudo ./buzzer
```

## Output

The output preview is the hole 8 octaves sounding with a delay of 500 mileseconds, each with the whole set of notes. Total of notes sounding would be 64 notes. The preview vid is the one below: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/output-gif.gif) <br />

Download the video with audio here: [Output Video](https://github.com/the-other-mariana/circuits-workshop/blob/master/session03/images/output-vid.mp4) <br />


