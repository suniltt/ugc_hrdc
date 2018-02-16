int val;
void setup() {
pinMode(12, OUTPUT);
pinMode(2, INPUT);
}
void loop()
 {
 val=digitalRead(2);
if  (val==LOW) {
digitalWrite(12, LOW);
}
if  (val==HIGH) {
digitalWrite(12,HIGH);
}
}
