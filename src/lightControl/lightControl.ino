void setup() {
  pinMode(A0, INPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  int num = analogRead(A0);
  if (A0 < 40)
    digitalWrite(8, HIGH);
     else digitalWrite(8, LOW);
}
