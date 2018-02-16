int val;
void setup(){
Serial.begin(9600);
}
void loop(){
  val= analogRead(A0);
  float mv = (val/1023)*5000;
  float cel =mv/10;
  //float farh =(cel*9)/5 +32;
  Serial.print("TEMPRATURE=");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();
  delay(1000);
}
