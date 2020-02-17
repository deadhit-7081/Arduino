#define A 7
#define B 8
#define pwm 9
char ch;
void setup()
{
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  Serial.begin(9600);
  analogWrite(pwm,OUTPUT);
}
void loop()
{
  ch=Serial.read();
  if(ch=='F  ')
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
}
