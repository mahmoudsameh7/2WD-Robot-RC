int in1=6;
int in2=5;
int in3=3;
int in4=4;

void setup() {
  pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,1);
delay(500);
digitalWrite(in1,0);
digitalWrite(in2,1);
digitalWrite(in3,0);
digitalWrite(in4,1);
delay(500);

digitalWrite(in1,0);
digitalWrite(in2,0);
digitalWrite(in3,1);
digitalWrite(in4,0);
delay(500);
digitalWrite(in1,1);
digitalWrite(in2,0);
digitalWrite(in3,0);
digitalWrite(in4,0);
delay(500);
digitalWrite(in1,1);
digitalWrite(in2,1);
digitalWrite(in3,1);
digitalWrite(in4,1);
}

void loop() {
  

}
