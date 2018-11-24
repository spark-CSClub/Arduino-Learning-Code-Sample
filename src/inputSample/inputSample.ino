int light = 1;

void setup() {
  pinMode(4, INPUT);
  pinMode(12, OUTPUT);
  //digitalWrite(12, HIGH);
}

void loop() {
  int state = digitalRead(4);
  if (state == HIGH)
  {
    light = 1 - light;
  }
  if (light == 1)
  digitalWrite(12, HIGH);
  else digitalWrite(12, LOW);
}
