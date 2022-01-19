void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(8,OUTPUT);
  pinMode(A1,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly
    if (digitalRead(A1)==LOW){
    digitalWrite(8,HIGH);
  }
  
  else{
    digitalWrite(8,LOW);
  }
  
}
