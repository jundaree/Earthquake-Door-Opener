
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()) {
    char c = Serial.read();
    if(c == '1')
      digitalWrite(13, HIGH);
    else
      digitalWrite(13, LOW);
  }
}
