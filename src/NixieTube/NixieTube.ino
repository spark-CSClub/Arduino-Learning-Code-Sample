int a = 12;
int b = 11;
int c = 10;
int d = 9;
int e = 8;
int f = 7;
int g = 6;
int h = 5;

int arr[8] = {a, b, c, d, e, f, g, h};

int arr1[10][8] = {
  {1, 1, 1, 1, 1, 1, 0, 0},
  {0, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 0, 1, 1, 0, 1, 0},
  {1, 1, 1, 1, 0, 0, 1, 0},
  {0, 1, 1, 0, 0, 1, 1, 0},
  {1, 0, 1, 1, 0, 1, 1, 0},
  {1, 0, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 0, 0, 0, 0, 0},
  {1, 1, 1, 1, 1, 1, 1, 0},
  {1, 1, 1, 1, 0, 1, 1, 0}
  };

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(arr[i], OUTPUT);  
  }
}

void loop() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 8; j++) {
      if (arr1[i][j] == 1) {
        digitalWrite(arr[j], HIGH);
      }
    }
    delay(1000);
    for (int j = 0; j < 8; j++) {
      digitalWrite(arr[j], LOW);
    }  
  }
}
