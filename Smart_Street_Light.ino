void setup() 
{
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(8,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
// IR Sensor 1
// IR Sensor 2
// IR Sensor 3
// LED 1
// LED 2
// LED 3
}
void loop()
{
if (digitalRead(2)==0&&digitalRead(3)==0&&digitalRead(4)==0)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if(digitalRead(2)==0&& digitalRead(3)==0)
{
digitalWrite(8,LOW);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
}
  else if(digitalRead(3)==0&& digitalRead(4)==0)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,LOW);
}
else if (digitalRead(2)==0&&digitalRead(4)==0)
{
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}
 else if(digitalRead(2)==0)
{
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
}
 else if (digitalRead(3)==0)
{
digitalWrite(8,HIGH);
digitalWrite(9,LOW);
digitalWrite(10,HIGH);
}
else if (digitalRead(4)==0)
{
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
}
else
{
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,HIGH);
}
}
