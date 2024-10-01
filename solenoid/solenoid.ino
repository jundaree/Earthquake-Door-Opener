#define Solenoid 13

void setup() {
  // put your setup code here, to run once:
  pinMode(Solenoid, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(Solenoid, HIGH);
  delay(1000);
  digitalWrite(Solenoid, LOW);
  delay(3000);
}
