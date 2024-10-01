#include <Dynamixel_Servo.h>

#include <Servo.h>


Servo servo;

void setup() {
  servo.attach(9);
  pinMode(13,OUTPUT);
  

}

void loop() {
  int p;
  for (p==0; p<180; p++) {
    servo.write(p);
    delay(10);
  }
  digitalWrite(13,HIGH);
  delay(1000);
  for (p=180; p>0; p--){
    servo.write(p);
    delay(10);
  }
  digitalWrite(13,LOW);
  delay(1000);
  
}
