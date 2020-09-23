#include<wiringPi.h>
const char LED = 7; // sends signal

int main(){
	// Wiring Pi functions
	wiringPiSetup(); // always
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LOW);
	
	while(1){
		digitalWrite(LED, HIGH); // led on
		delay(500); //miliseconds
		digitalWrite(LED, LOW); // led off
		delay(500);
	}
	
	//digitalRead();
	
}
