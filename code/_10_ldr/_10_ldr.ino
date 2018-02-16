void setup(){
Serial.begin(9600);
}
void loop(){
  int lightlevel= analogRead(A0);
  float lux = lightlevel*(5.0/1023);
  Serial.println(lux);
}
