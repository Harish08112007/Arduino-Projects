void setup() {
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(A0)==LOW)
  {
    digitalWrite(8,HIGH);
  }
  
  else
  {
    digitalWrite(8,LOW);
  }
}
