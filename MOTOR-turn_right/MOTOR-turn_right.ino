#define C1A 13
#define C1B 11 
#define C2A 8
#define C2B 7
void setup() {
  pinMode(C1A,OUTPUT);
  pinMode(C1B,OUTPUT); 
  pinMode(C2A,OUTPUT); 
  pinMode(C2B,OUTPUT);
}
void loop(){
  //Turn Right
digitalWrite(C1A, LOW);
digitalWrite(C1B, HIGH);
digitalWrite(C2A, HIGH);
digitalWrite(C2B, LOW);
}

