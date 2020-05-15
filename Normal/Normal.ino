#define LF 6
#define LB 7
#define RF 8
#define RB 9
void setup() {
  // put your setup code here, to run once:
  pinMode(LF,OUTPUT);
  pinMode(LB,OUTPUT);
  pinMode(RF,OUTPUT);
  pinMode(RB,OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
 
while(Serial.available()){
  
    char val = Serial.read();
    if (val=='f'){
      analogWrite(LF,255);
      analogWrite(LB,0);
      analogWrite(RF,255);
      analogWrite(RB,0);
    }
    if (val=='b'){
    analogWrite(LF,0);
    analogWrite(LB,255);
    analogWrite(RF,0);
    analogWrite(RB,255);
    }
    if (val=='s'){
  analogWrite(LF,0);
  analogWrite(LB,0);
  analogWrite(RF,0);
  analogWrite(RB,0);
  }
  if (val=='r'){
    analogWrite(LF,255);
    analogWrite(LB,0);
    analogWrite(RF,0);
    analogWrite(RB,255);
 
  }
  if (val=='l'){
      analogWrite(LF,0);
      analogWrite(LB,255);
      analogWrite(RF,255);
      analogWrite(RB,0);
 
  }     
}
}
