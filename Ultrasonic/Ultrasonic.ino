#include <Ultrasonic.h>

Ultrasonic ultrasonic(3, 2);

int spd=125;
void setup() {
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
pinMode(4,INPUT);
pinMode(7,INPUT);
pinMode(8,INPUT);
Serial.begin(115200);
}
void forward(int dly)
{
    analogWrite(5,spd);
    analogWrite(6,0);
    analogWrite(9,spd);
    analogWrite(10,0);
    delay(dly);
 }

  void right(int dly)
{
    analogWrite(5,0);
    analogWrite(6,255);
    analogWrite(9,255);
    analogWrite(10,0);
    delay(dly);
 }  
  void left(int dly)
{
    analogWrite(5,255);
    analogWrite(6,0);
    analogWrite(9,0);
    analogWrite(10,255);
    delay(dly);                                                      
 }  
 void back(int dly)
 {
 
    analogWrite(5,0);
    analogWrite(6,spd);
    analogWrite(9,0);
    analogWrite(10,spd);
  delay(dly);
  }
  void stp(int dly)
  {
      analogWrite(5,0);
    analogWrite(6,0);
    analogWrite(9,0);
    analogWrite(10,0);
    delay(dly);
   
  }
  void turn(int dly)
  {
    analogWrite(5,spd);
    analogWrite(6,0);
    analogWrite(9,0);
    analogWrite(10,spd);
    delay(dly);
  }
    void turnop(int dly)
  {
    analogWrite(5,0);
    analogWrite(6,spd);
    analogWrite(9,spd);
    analogWrite(10,0);
    delay(dly);
  }

void loop() {
int    distance = ultrasonic.read();
  Serial.println(distance  );
while (distance>7)
{distance = ultrasonic.read();
   if ((digitalRead(4)==LOW)&&(digitalRead(7)==LOW))//&&(digitalRead(8)==LOW) )
  {
    forward(0);
  }
else if (digitalRead(7)==LOW)//&&(digitalRead(8)==LOW))
  {
    right(30);
}
else if (digitalRead(4)==LOW)//&&(digitalRead(8)==LOW))
  {
    left(30);
}
  else if ((digitalRead(4)==HIGH)&&(digitalRead(7)==HIGH))//&&(digitalRead(8)==HIGH))
  {
  forward(0);
  }
}
if(distance <16)
{
  back(400);
  left(500);
  forward(900);
  right(400);
  forward(1000);
  right(400);
  forward(800);
   }
else
{
  forward(0);
}

}
