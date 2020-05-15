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
void forward(){
    digitalWrite(LF,HIGH);
    digitalWrite(LB,LOW);
    digitalWrite(RF,HIGH);
    digitalWrite(RB,LOW);
      
}
void back(){
    digitalWrite(LF,LOW);
    digitalWrite(LB,HIGH);
    digitalWrite(RF,LOW);
    digitalWrite(RB,HIGH);
  
}
void Stop(){
    digitalWrite(LF,LOW);
  digitalWrite(LB,LOW);
  digitalWrite(RF,LOW);
  digitalWrite(RB,LOW);
}
void right(){
  digitalWrite(LF,HIGH);
  digitalWrite(LB,LOW);
  digitalWrite(RF,LOW);
  digitalWrite(RB,HIGH);

}
void left(){
  digitalWrite(RF,HIGH);
  digitalWrite(RB,LOW);
  digitalWrite(LF,LOW);
  digitalWrite(LB,HIGH);

}
void topright(){
  digitalWrite(LF,HIGH);
  digitalWrite(LB,LOW);
  digitalWrite(RF,LOW);
  digitalWrite(RB,HIGH);
  delay(300);
  digitalWrite(LF,HIGH);
  digitalWrite(LB,LOW);
  digitalWrite(RF,HIGH);
  digitalWrite(RB,LOW);
}
void topleft(){
  digitalWrite(LF,LOW);
  digitalWrite(LB,HIGH);
  digitalWrite(RF,HIGH);
  digitalWrite(RB,LOW);
  delay(300);
  digitalWrite(LF,HIGH);
  digitalWrite(LB,LOW);
  digitalWrite(RF,HIGH);
  digitalWrite(RB,LOW);
}
void botright(){
  digitalWrite(LF,LOW);
  digitalWrite(LB,HIGH);
  digitalWrite(RF,HIGH);
  digitalWrite(RB,LOW);
  delay(300);
  digitalWrite(LF,LOW);
  digitalWrite(LB,HIGH);
  digitalWrite(RF,LOW);
  digitalWrite(RB,HIGH);
}
void botleft(){
  digitalWrite(LF,HIGH);
  digitalWrite(LB,LOW);
  digitalWrite(RF,LOW);
  digitalWrite(RB,HIGH);
  delay(300);
  digitalWrite(LF,LOW);
  digitalWrite(LB,HIGH);
  digitalWrite(RF,LOW);
  digitalWrite(RB,HIGH);
}
void loop() {
  // put your main code here, to run repeatedly:
 
if (Serial.available()){

    char val = Serial.read();
    Serial.println(val);
    if (val=='F'){
     forward();
    }
    if (val=='B'){
    back();
    }
    if (val=='S'){
    Stop();
    }
    if (val=='R'){
    right();
    }
    if (val=='L'){
   
    left();
    } 
    if (val=='T'){
      topright();   
    }
    if (val=='E'){
      topleft();   
    }
    if (val=='N'){
      botright();   
    }    
    if (val=='V'){
      botleft();   
    } 
}
}
