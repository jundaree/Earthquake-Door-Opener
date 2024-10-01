#include <servo.h>
Servo servo;

void setup() {
  servo.attach(9);
  

}

void loop() {
  int p;
  for (p==0; p<180; p++) {
    servo.write(p);
    delay(10);
  }
  for (p=180; p>0; p--){
    servo.write(p);
    delay(10);
  }
}
