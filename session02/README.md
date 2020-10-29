# Session 02

Today, we use a touch sensor that whenever it was touched, a led turned on. <br />

## Specifications

Raspberry: `Raspberry Pi 3` <br />
Language: `C` <br />

## Setup

The Raspberry looked like this: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session02/images/set-up-01.jpg?raw=true) <br />

While the protoboard looked like this: <br />

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session02/images/set-up-02.jpg?raw=true) <br />

## Usage

In the Raspberry, open the command prompt and type:

### To Compile

```
& gcc buttons.c -o outputname -lwiringPi
```

### To Run

```
& sudo ./outputname
```

## Output 

The small code run in the Raspberry works like the following:

![alt text](https://github.com/the-other-mariana/circuits-workshop/blob/master/session02/images/output-gif.gif) <br />