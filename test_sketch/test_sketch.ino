int analogPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int val = (analogRead(analogPin) + 128) / 256;
  Serial.println(val);
  delay(1);
}
