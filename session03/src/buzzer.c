#include<wiringPi.h>
#include<softTone.h>

const char BUZZER = 8;

int main(){
		float freqs[8] = {16.35, 18.35, 20.6, 21.83, 24.5, 27.5, 30.87, 0};
		
		wiringPiSetup();
		softToneCreate(BUZZER); // pin is not normal output, it is sound (library converts num/freq to voltage)
		
		int i = 0;
		int j = 0;
		int oct = 1;
		
		for(j=0; j < 8; j++){
			
			for(i = 0; i < 8; i++){
					softToneWrite(BUZZER, freqs[i]*oct); // 2^(4) 4 is octave i want
					delay(500); //milisecs
			}
			oct *= 2;
		}
		
		//softToneWrite(BUZZER, 0); // shut buzzer up
}
