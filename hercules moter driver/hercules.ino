#define A 7
#define B 8
#define pwm 9
char ch;
int i,c;
void setup()
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(pwm,OUTPUT);
}
void loop()
{
  while(Serial.available())
  {
    switch(c)
    {
      case 1:
       ch=Serial.read();
  if(ch=='F')
  {
    digitalWrite(A,HIGH);
    digitalWrite(B,LOW);
    Serial.println("Forward");
  }
  if(ch=='R')
  {
    digitalWrite(A,LOW);
    digitalWrite(B,HIGH);
    Serial.println("Reverse");
  }
  if(ch=='S')
  {
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    Serial.println("Stop");
  }
  break;
    case 2:
    for(i=1;i<=100;i++)
  {
  analogWrite(pwm,i);
  Serial.println(i); 
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  delay(1000);
  break;
  }
  case 3:
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  delay(5000);
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  delay(5000);
  }
  } 
}
