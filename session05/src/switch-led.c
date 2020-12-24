#include<wiringPi.h>
#include <stdio.h>

const char SENSOR_PIN = 8;
const char LED_PIN = 9;
char PRESSED = 0;

// led voltage: 3.0 - 3.4 VCD
// touch sensor voltage: 2 - 5.5 VCD
int main(){
	printf("Led Switch Program \n");
	wiringPiSetup();
	
	pinMode(SENSOR_PIN, INPUT);
	pinMode(LED_PIN, OUTPUT);
	
	digitalWrite(LED_PIN, LOW);
	
	while(1){
		
			char touched = digitalRead(SENSOR_PIN);

			if(touched == 1 && PRESSED == 1){
				PRESSED = 0;
				touched = 0;
				printf("pressed value = %d \n", PRESSED);
				delay(500);
			}
			if(touched == 1 && PRESSED == 0){
				PRESSED = 1;
				touched = 0;
				printf("pressed value = %d \n", PRESSED);
				delay(500);
			}
			
			if(PRESSED == 1){
				digitalWrite(LED_PIN, HIGH);
			} else{
				digitalWrite(LED_PIN, LOW);
			}
			
	}
}
