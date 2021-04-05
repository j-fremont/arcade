#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  pinMode(0, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() {
  int test = digitalRead(0);

  if (test == LOW) {
    Keyboard.press('u'); // "u"
  } else {
    Keyboard.release('u'); // "u"
  }

}
