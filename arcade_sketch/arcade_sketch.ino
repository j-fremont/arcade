#include <Keyboard.h>

void setup() {

  Keyboard.begin();
  
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, INPUT_PULLUP);
  pinMode(11, INPUT_PULLUP);
  pinMode(12, INPUT_PULLUP);
  
  int analogPin0 = 0;
  int analogPin1 = 1;
  
  Serial.begin(9600);
}  

void loop() {

  int p1ayer1_joystickUp = digitalRead(0);
  int p1ayer1_joystickDown = digitalRead(1);
  int p1ayer1_joystickLeft = digitalRead(2);
  int p1ayer1_joystickRight = digitalRead(3);
  int p1ayer1_button1 = digitalRead(4);
  int p1ayer1_button2 = digitalRead(5);
  int p1ayer2_joystickUp = digitalRead(6);
  int p1ayer2_joystickDown = digitalRead(7);
  int p1ayer2_joystickLeft = digitalRead(8);
  int p1ayer2_joystickRight = digitalRead(9);
  int p1ayer2_button1 = digitalRead(10);
  int p1ayer2_button2 = digitalRead(11);
  int coin = digitalRead(12);
  
  valAnalogPin0 = analogRead(analogPin0);
  valAnalogPin1 = analogRead(analogPin1);
  
  if (p1ayer1_joystickUp == LOW) {
    Keyboard.press(KEY_UP_ARROW);
  } else {
    Keyboard.release(KEY_UP_ARROW);
  }
  if (p1ayer1_joystickDown == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
  } else {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if (p1ayer1_joystickLeft == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (p1ayer1_joystickRight == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if (p1ayer1_button1 == LOW) {
    Keyboard.press("u");
  } else {
    Keyboard.release("u");
  }
  if (p1ayer1_button2 == LOW) {
    Keyboard.press("h");
  } else {
    Keyboard.release("h");
  }  
  if (p1ayer2_joystickUp == LOW) {
    Keyboard.press("i");
  } else {
    Keyboard.release("i");
  }
  if (p1ayer2_joystickDown == LOW) {
    Keyboard.press("k");
  } else {
    Keyboard.release("k");
  }
  if (p1ayer2_joystickLeft == LOW) {
    Keyboard.press("j");
  } else {
    Keyboard.release("j");
  }
  if (p1ayer2_joystickRight == LOW) {
    Keyboard.press("l");
  } else {
    Keyboard.release("l");
  }
  if (p1ayer2_button1 == LOW) {
    Keyboard.press("e");
  } else {
    Keyboard.release("e");
  }
  if (p1ayer2_button2 == LOW) {
    Keyboard.press("s");
  } else {
    Keyboard.release("s");
  }  
  if (coin == LOW) {
    Keyboard.press(0x20);
  } else {
    Keyboard.release(0x20);
  }
  
}
