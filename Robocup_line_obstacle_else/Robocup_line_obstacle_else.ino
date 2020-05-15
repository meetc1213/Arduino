//duplicate
#include <Ultrasonic.h>

    Ultrasonic ultra1(3, 2);
    //Ultrasonic ultra2(10, 11);
    #define IR_right 7
    #define IR_left 8
    #define ML1 5
    #define ML2 6
    #define MR1 9
    #define MR2 10
   
    int spd=160;
    void setup() {
      // put your setup code here, to run once:
    pinMode(ML1,OUTPUT);
    pinMode(ML2,OUTPUT);
    pinMode(MR1,OUTPUT);
    pinMode(MR2,OUTPUT);
    pinMode(IR_right,INPUT);
    pinMode(IR_left,INPUT);
    Serial.begin(9600);
    }
    void forward(int dly)
{
    analogWrite(ML1,spd);
    analogWrite(MR1,0);
    analogWrite(MR1,spd);
    analogWrite(MR2,0);
    delay(dly);
 }

  void right(int dly)
{
    analogWrite(ML1,0);
    analogWrite(ML2,250);
    analogWrite(MR1,spd);
    analogWrite(MR2,0);
    delay(dly);
 }  
  void left(int dly)
{
    analogWrite(ML1,spd);
    analogWrite(ML2,0);
    analogWrite(MR1,0);
    analogWrite(MR2,250);
    delay(dly);                                                      
 }  
 void back(int dly)
 {
 
    analogWrite(ML1,0);
    analogWrite(ML2,spd);
    analogWrite(MR1,0);
    analogWrite(MR2,spd);
  delay(dly);
  }
  void stp(int dly)
  {
    analogWrite(ML1,0);
    analogWrite(ML2,0);
    analogWrite(MR1,0);
    analogWrite(MR2,0);
    delay(dly);
   
  }
  void turn(int dly)
  {
    analogWrite(ML1,spd);
    analogWrite(ML2,0);
    analogWrite(MR1,0);
    analogWrite(MR2,spd);
    delay(dly);
  }
    void turnop(int dly)
  {
    analogWrite(ML1,0);
    analogWrite(ML2,spd);
    analogWrite(MR1,spd);
    analogWrite(MR2,0);
    delay(dly);
  }

    void loop() {
      // put your main code here, to run repeatedly:
    int ir=digitalRead(IR_right);
    int il=digitalRead(IR_left);
    int distF = ultra1.read();
    if (distF<12){
      stp(150);
      back(200);
      left(700);
      forward(1800);
      right(250);
      forward(800);
      right(250);      
      forward(2500);
        
    }   
          
     if ((ir==1) && (il==0))
    {
        analogWrite(ML1,0);
        analogWrite(ML2,250);
        analogWrite(MR1,spd);
        analogWrite(MR2,0);
        delay(150);
     
    }
    else if((ir==0) && (il==1)){
        analogWrite(ML1,spd);
        analogWrite(ML2,0);
        analogWrite(MR1,0);
        analogWrite(MR2,250);
        delay(150);
    }
    else if ((ir==1) && (il==1)){
        analogWrite(ML1,spd);
        analogWrite(ML2,0);
        analogWrite(MR1,spd);
        analogWrite(MR2,0);
      delay(150);
    }
    else if ((ir==0) && (il==0)){
        analogWrite(ML1,spd);
        analogWrite(ML2,0);
        analogWrite(MR1,spd);
        analogWrite(MR2,0);
       
    }
    }
