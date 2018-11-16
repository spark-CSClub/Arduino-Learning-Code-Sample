int aPin = 7;
int bPin = 8;
int cPin = 9;
int dPin = 10;

void setup() {
  pinMode(aPin, OUTPUT);
  pinMode(bPin, OUTPUT);
  pinMode(cPin, OUTPUT);
  pinMode(dPin, OUTPUT);
}

void loop() {
  digitalWrite(aPin, HIGH);
  delay(500);
  digitalWrite(aPin, LOW);
  digitalWrite(bPin, HIGH);
  delay(500);
  digitalWrite(bPin, LOW);
  digitalWrite(cPin, HIGH);
  delay(500);
  digitalWrite(cPin, LOW);
  digitalWrite(dPin, HIGH);
  delay(500);
  digitalWrite(dPin, LOW);
}
