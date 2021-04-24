char onTouch = 0;
char TOLERANCE = 15; // cm

void setup() {
  // CONNECTIONS
  // ULT TRIG 1 - 2
  // ULT TRIG 2 - 3
  // ULT TRIG 3 - 4
  
  // ULT ECH0 1 - 5
  // ULT ECHO 2 - 6
  // ULT ECHO 3 - 7

  // VIB INPUT 1 - 8
  // VIB INPUT 2 - 9
  // VIB INPUT 3 - 10

  // TOUCH INPUT - 11
  
  pinMode(2, OUTPUT);// TRIGGER - OUTPUT
  pinMode(3, OUTPUT);// TRIGGER - OUTPUT
  pinMode(4, OUTPUT);// TRIGGER - OUTPUT
  
  pinMode(5, INPUT);// ECHO - INPUT
  pinMode(6, INPUT);// ECHO - INPUT
  pinMode(7, INPUT);// ECHO - INPUT
  
  pinMode(8, INPUT);// VIB - INPUT
  pinMode(9, INPUT);// VIB - INPUT
  pinMode(10, INPUT);// VIB - INPUT
  
  pinMode(11, INPUT); // TOUCH - INPUT
  
  Serial.begin(9600);// enable serial monitor
}
void loop() {
  // touch sensor
  char touched = digitalRead(11);
  long t[3];
  long cm[3];

  if(touched == 1 && onTouch == 1){
    onTouch = 0;
    touched = 0;
    delay(600);
  }
  if(touched == 1 && onTouch == 0){
    onTouch = 1;
    touched = 0;
    delay(600);
  }
  if(onTouch == 1){
    
    //pulse output TRIGGERS
    int pin = 2;
    for (int i = pin; i <= 4; i++){
      digitalWrite(i, LOW);
      delayMicroseconds(4);
      digitalWrite(i, HIGH);
      delayMicroseconds(10);
      digitalWrite(i, LOW);

      t[i - pin] = pulseIn(i + 3, HIGH); // input pulse and save it in variable
      cm[i - pin] = t[i - pin] / 29 / 2; // time convert distance
      
      Serial.print("Sensor #");
      Serial.print((i - pin));
      Serial.print(": ");
      Serial.print(cm[i - pin]); // print serial monitor cm
      Serial.print(" cm");
      
      Serial.println();// print space
      Serial.println();// print space
      delay(100);// delay
    }
    
  } else{
    // do nothing
    Serial.print("System Turned Off \n");
  }
  
}
