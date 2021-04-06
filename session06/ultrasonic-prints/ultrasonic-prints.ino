void setup() {
  pinMode(2, OUTPUT);//define arduino pin
  pinMode(4, INPUT);//define arduino pin
  Serial.begin(9600);//enable serial monitor
}
void loop() {
  //pulse output
  digitalWrite(2, LOW);
  delayMicroseconds(4);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);
  
  long t = pulseIn(4, HIGH);//input pulse and save it veriable
  
  long inches = t / 74 / 2; //time convert distance
  long cm = t / 29 / 2; //time convert distance
  String inch = " inches \t";
  String CM = " cm";
  Serial.print(inches +inch);//print serial monitor inches
  Serial.println(cm +CM);//print serial monitor cm
  Serial.println();//print space
  delay(100);//delay
}
