void setup() {
  pinMode(5, INPUT);
  pinMode(12, OUTPUT);
}

void loop() {
  digitalWrite(12, digitalRead(5));
}
