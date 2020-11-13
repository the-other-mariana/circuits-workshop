# Session 01

Small code that makes a led light blink.

## Specifications

Raspberry: `Raspberry Pi 3` <br />
Language: `C` <br />

## Set UP

The Raspberry and the protoboard should be connected as shown below. <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/rasp-proto.jpg?raw=true)

## Usage

In the raspberry, open the command prompt and type:

### To Compile

```
& gcc blink.c -o outputname -lwiringPi
```

### To Run

```
& sudo ./outputname // in my case, also blink
```

# Output

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session01/images/output-blink.gif)