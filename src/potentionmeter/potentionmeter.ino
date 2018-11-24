void setup() {
  pinMode(8, OUTPUT);
  pinMode(A1, INPUT);
}

void loop() {
  int num = analogRead(A0);
  digitalWrite(8, HIGH);
  delayMicroseconds(100);
  digitalWrite(8, LOW);
  delayMicroseconds(num);
}
