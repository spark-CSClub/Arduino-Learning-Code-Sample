
void setup() {
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);

}

void loop() {
  digitalWrite(6, HIGH);
  digitalWrite(11, HIGH);
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(10, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  delay(1000);
  digitalWrite(4, LOW);
  digitalWrite(6, HIGH);
  delay(100000000);
  
  
  
  

}
