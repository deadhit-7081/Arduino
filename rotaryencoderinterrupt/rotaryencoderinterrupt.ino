#define A 2
#define B 3
volatile int c=0;
volatile int prev,curr;
void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  attachInterrupt(digitalPinToInterrupt(A),value1,CHANGE);
  attachInterrupt(digitalPinToInterrupt(B),value2,CHANGE);
  prev=digitalRead(A);
}
void loop()
{
    Serial.println(c);
}
void value1()
{
  curr=digitalRead(A);
  if(curr!=prev)
  {
    prev=curr;
  }
}
void value2()
{
  curr=digitalRead(A);
  if(curr==prev)
  {
    if(digitalRead(B)!=curr)
    {
      c++;
    }
    else
    {
      c--;
    }
  }
}
