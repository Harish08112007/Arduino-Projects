int sensorPin = A0;

void setup() 
{
  Serial.begin(9600);
}
void loop() 
{
  int sensorValue = analogRead(sensorPin);
  if (sensorValue==HIGH)
  {
    Serial.println(sensorValue);
    digitalWrite(8,HIGH);
    delay(1000);
  }
}
