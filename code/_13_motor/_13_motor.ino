
void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}
void loop() {
 
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  delay(5000);
  //stop
  digitalWrite(3,LOW);
  digitalWrite(4,LOW);
  delay(5000);
  //change direction
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  delay(5000);
}
