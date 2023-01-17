// MODE
int fadeAmount = 3;  // How many checkpoints for fade, this 3 is perfect default, but if you want use 5 :)
int k = 0; // Don't touch them
int xaxa = digitalRead(xac);
// PIN
int xac = 13; // ACTIVATED SENSOR // PIN 13
int xp = 7; // Red (R) // PIN 7
int xv = 6; // Green (G) // PIN 6
int xs = 5; // Blue (B) // PIN 5

void setup() {
  pinMode(xp, OUTPUT);
  pinMode(xv, OUTPUT);
  pinMode(xs, OUTPUT);
  pinMode(xac, INPUT);
}

void loop() {
  analogWrite(xp, k);
  analogWrite(xv, k);
  analogWrite(xs, k);
  k = k + fadeAmount;
  if (k <= 0 || k >= 125) { // 125 is default brightness value and maxium is 255, minium is 0 :)
    fadeAmount = -fadeAmount;
  }
  delay(100); // DELAY MEAN TIME MS, DEFAULT 100MS = 0,1 SECONDS
  if (xaxa == 1) {// If you have sensor, this activated
    analogWrite(xp, HIGH); // Activated sensor
  }
  else { // Not resposive sensor
    digitalWrite(xp, LOW); // No activated sensor
  }
}
