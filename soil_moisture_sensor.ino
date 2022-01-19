int a;
void setup() {
  pinMode(7,OUTPUT);
  pinMode(A3,INPUT);
}

void loop() {
  a=digitalRead(A3);
  if (a==LOW)
  {
   digitalWrite(7,HIGH);
   delay(100);
   digitalWrite(7,LOW);
   delay(1000);
  }
  else
  {
    digitalWrite(7,LOW);
  }
}
