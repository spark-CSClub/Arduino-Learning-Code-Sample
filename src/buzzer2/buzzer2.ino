#define DO 262
#define RE 294
#define MI 330
#define FA 348
#define SOI 392
#define LA 440
#define SI 494

int arr[7] = {DO, RE, MI, FA, SOI, LA, SI};

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  for (int i = 0; i < 7; i++) {
      tone(8, arr[i], 1000);
      delay(1000);
  }
}
