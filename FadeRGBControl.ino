int fadeAmount = 3;  // How many checkpoints for fade, this 3 is perfect default, but if you want use 5 :)
int k = 0; // Brightness
int xp = 7; // Red (R)
int xv = 6; // Green (G)
int xs = 5; // Blue (B)

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
