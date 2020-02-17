# define b1 2
# define b2 3
# define b3 4
# define H1 6
# define H2 10
# define pwm 7
# define ir1 8
# define ir2 9
# define s1 40
# define s2 230
# define s3 230
# define s4 230
int i;
void setup()
{
  Serial.begin(9600);
  pinMode(b1,INPUT_PULLUP);
  pinMode(b2,INPUT_PULLUP);
  pinMode(b3,INPUT_PULLUP);
  pinMode(H1,OUTPUT);
  pinMode(H2,OUTPUT);
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
}
void loop()
{
  if(digitalRead(b1)==HIGH)
  { 
    Serial.println("b1");
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        Serial.println("stop1");
        break;
      }
    }
    while(digitalRead(ir2)==HIGH)
    {
      analogWrite(pwm,s2);
      digitalWrite(H1,HIGH);
      digitalWrite(H2,LOW);
      Serial.println("Hit");
      if(digitalRead(ir2)==LOW)
      {
      digitalWrite(H1,HIGH);
      digitalWrite(H2,HIGH);
      Serial.println("Stop2");
      break;
      }
    }
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      Serial.println("Reverse");
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        break;
      }
    }
  }
    if(digitalRead(b2)==HIGH)
  { 
    Serial.println("b2");
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        Serial.println("stop1");
        break;
      }
    }
    while(digitalRead(ir2)==HIGH)
    {
      analogWrite(pwm,s3);
      digitalWrite(H1,HIGH);
      digitalWrite(H2,LOW);
      Serial.println("Hit");
      if(digitalRead(ir2)==LOW)
      {
      digitalWrite(H1,HIGH);
      digitalWrite(H2,HIGH);
      Serial.println("Stop2");
      break;
      }
    }
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      Serial.println("Reverse");
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        break;
      }
    }
  }
   /* if(digitalRead(b3)==HIGH)
  { 
    Serial.println("b3");
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        Serial.println("stop1");
        break;
      }
    }
    while(digitalRead(ir2)==HIGH)
    {
      analogWrite(pwm,s4);
      digitalWrite(H1,HIGH);
      digitalWrite(H2,LOW);
      Serial.println("Hit");
      if(digitalRead(ir2)==LOW)
      {
      digitalWrite(H1,HIGH);
      digitalWrite(H2,HIGH);
      Serial.println("Stop2");
      break;
      }
    }
    while(digitalRead(ir1)==LOW)
    {
      analogWrite(pwm,s1);
      digitalWrite(H2,HIGH);
      digitalWrite(H1,LOW);
      Serial.println("Reverse");
      if(digitalRead(ir1)==HIGH)
      {
        digitalWrite(H1,HIGH);
        digitalWrite(H2,HIGH);
        break;
      }
    }
  }*/
}
