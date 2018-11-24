#define DO 262
#define RE 294
#define MI 330
#define FA 348
#define SOL 392
#define LA 440
#define SI 494
#define DO_H 523
#define RE_H 587
#define MI_H 659
#define FA_H 698
#define SOL_H 784
#define LA_H 880
#define SI_H 988

int pin = 8;

int arr[25] = {SOL, SOL, LA, SOL, DO_H, SI, SOL, SOL, LA, SOL, RE_H, DO_H, SOL, SOL, SOL_H, MI_H, DO_H, SI, LA, FA_H, FA_H, MI_H, DO_H, RE_H, DO_H};

void setup() {
  pinMode(pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 25; i++) {
    tone(pin, arr[i], 500);
    delay(500);
  }
  delay(2000);
}
