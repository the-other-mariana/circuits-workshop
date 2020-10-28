// & gcc file.c -o outputname -lwiringpi
#include<wiringPi.h>

const char SENSOR = 8; // sensor
const char LED = 9; // led

int main(){
	wiringPiSetup();
	
	pinMode(SENSOR, INPUT); // we receive signal from sensor, input
	pinMode(LED, OUTPUT); // we turn on the led, output
	
	digitalWrite(LED, LOW); // send 0 to every output in case there is residual signal
	
	while(1){
			digitalWrite(LED, digitalRead(SENSOR)); //digitalRead: 0 or 1
	}
}

