int fadeAmount = 3;  // how many points to fade the LED by
int k = 0;
int xp = 7; // RED
int xv = 6; // GREEN
int xs = 5; // BLUE

// IF YOU WANT BUT ANOTHER PINS. CHANGE XP, XV, XS PIN VALUES ANOTHER :)
// DEFAULT PINS 5, 6, 7
// DON'T MISS GROUND CABLE :)

void setup() {
  pinMode(xp, OUTPUT);
  pinMode(xv, OUTPUT);
  pinMode(xs, OUTPUT);
}

void loop() {
  analogWrite(xp, k);
  analogWrite(xv, k);
  analogWrite(xs, k);
  k = k + fadeAmount;
  if (k <= 0 || k >= 125) {
    fadeAmount = -fadeAmount;
  }
  delay(100); // DELAY MEAN TIME MS, DEFAULT 100MS = 0,1 SECONDS
}
