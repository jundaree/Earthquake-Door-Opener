
#define Electromagnet  2

#define LED  13

void setup() {                
  pinMode(Electromagnet, OUTPUT); 
  pinMode(LED, OUTPUT);   
}
void loop() {
  digitalWrite(LED, HIGH);
  digitalWrite(Electromagnet, HIGH);
  delay(10000);
  digitalWrite(LED, LOW);
  digitalWrite(Electromagnet, LOW);
  delay(1000);
  
  
}

//[출처] 전자석 모듈 (Electromagnet Module)|작성자 가치


