
#include <Wire.h>
int c,d,a,b;
void setup() 
{
  Wire.begin(8);                // join i2c bus with address #8
  Wire.onRequest(requestEvent);
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);  
}

void loop()
{
  delay(100);
}                                 


// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void requestEvent()
{
  while(Serial.available())
  {
      c=Serial.read();
      Wire.write(c);
      delay(1000);
  }
}
void receiveEvent()
{ 
  while(Wire.available())
  {
    //for(i=0;i<6;i++)
   // {
    a=Wire.read();
    d=a-48;
    Serial.println(d);
    b=d<<1;
    Serial.println(b);
    Serial.println(b,BIN);    //}
  }
}
