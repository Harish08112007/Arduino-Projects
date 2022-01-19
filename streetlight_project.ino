#include<SoftwareSerial.h>
int sensorPin=A0;
int sensorValue=0;

void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  sensorValue=analogRead(A0);
  Serial.println(sensorValue);
  if (sensorValue<100)
  {
    Serial.println("LED light on");
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  else
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    delay(sensorValue);
  }
