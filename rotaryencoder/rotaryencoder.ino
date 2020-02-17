#define A 6
#define B 7
 int c = 0,curr,prev; 
 void setup()
 { 
   pinMode (A,INPUT);
   pinMode (B,INPUT);
   Serial.begin (9600);
   prev = digitalRead(A);   
 } 
 void loop() 
 { 
   curr = digitalRead(A);
  ((curr!=prev)?((digitalRead(B)!=curr)?(Serial.println(c++)):(Serial.println(c--))):(prev=curr));
 } 
