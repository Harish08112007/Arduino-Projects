int red1=4;
int green1=5;
int blue1=6;
int red2=7;
int green2=8;
int blue2=9;
int red3=10;
int green3=11;
int blue3=12;
void setup() {
  // put your setup code here, to run once:
  pinMode(red1,OUTPUT);
  pinMode(blue1,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(red2,OUTPUT);
  pinMode(blue2,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(green3,OUTPUT);
  pinMode(blue3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(red1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(red3,HIGH);
  delay(1000);
  digitalWrite(red1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(red3,LOW);
  delay(1000);
  digitalWrite(blue2,HIGH);
  delay(1000);
  digitalWrite(blue2,LOW);
  delay(1000);
  
  digitalWrite(green1,HIGH);
  digitalWrite(red2,HIGH);
  digitalWrite(green3,HIGH);
  delay(1000);
  digitalWrite(green1,LOW);
  digitalWrite(red2,LOW);
  digitalWrite(green3,LOW);
  delay(1000);
  digitalWrite(blue2,HIGH);
  delay(1000);
  digitalWrite(blue2,LOW);
  delay(1000);
  
  digitalWrite(blue1,HIGH);
  digitalWrite(green2,HIGH);
  digitalWrite(blue3,HIGH);
  delay(1000);
  digitalWrite(blue1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(blue3,LOW);
  delay(1000);
  digitalWrite(red2,HIGH);
  delay(1000);
  digitalWrite(red2,LOW);
  delay(1000);
}
