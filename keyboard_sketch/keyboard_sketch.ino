#include <Keyboard.h>

void setup() {
  Keyboard.begin();
  Serial.begin(9600);
}

void loop() {
  int test = digitalRead(0);

  /*if (test == LOW) {
    Keyboard.press("o");
  } else {
    Keyboard.release("o");
  }*/

}
