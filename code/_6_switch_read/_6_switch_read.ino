void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
}
void loop()
 {
 Serial.print("Read Switch Input: ");
Serial.println(digitalRead(2));
delay(100);
}
