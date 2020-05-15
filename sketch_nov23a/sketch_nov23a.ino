/*const int Trg = 3;
const int echo = 11;*/
#define IR1 3
#define IR2 4
void setup() {
  // put your setup code here, to run once:
pinMode(Trg, OUTPUT); // Sets the trigPin as an Output
pinMode(echo, INPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
digitalWrite(Trg, LOW);
int duration = pulseIn(echo, HIGH);
// Calculating the distance
int distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
/*digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,HIGH);
pinMode(9,OUTPUT);
pinMode(10,OUTPUT);
Serial.begin(9600);
}

void loop() {
digitalWrite(Trg, LOW);
delayMicroseconds(2);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(Trg, HIGH);
delayMicroseconds(10);
digitalWrite(Trg, LOW);
int duration = pulseIn(echo, HIGH);
// Calculating the distance
int distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
Serial.print("Distance: ");
Serial.println(distance);
/*digitalWrite(5,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);
*/
delay(300);
}
