int aPin = 7;
int bPin = 8;
int cPin = 9;
int dPin = 10;
int ePin = 11;
int fPin = 12;

int arr[6] = {aPin, bPin, cPin, dPin, ePin, fPin};

void setup() {
  for (int i = 0; i < 6; i++) {
    pinMode(arr[i], OUTPUT);  
  }
}

void loop() {
 for (int i = 0; i < 6; i++) {
  digitalWrite(arr[i], HIGH);
  delay(100);
  digitalWrite(arr[i], LOW);
 }
}
