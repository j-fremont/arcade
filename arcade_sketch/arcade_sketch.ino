#include <Keyboard.h>

int analogPin0 = 0;
int analogPin1 = 1;
  
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
  pinMode(13, INPUT_PULLUP);
  
  Serial.begin(9600);
}  

void loop() {

  int player1_joystickDown = digitalRead(0);
  int player1_joystickLeft = digitalRead(1);
  int player1_joystickUp = digitalRead(2);
  int player1_joystickRight = digitalRead(3);
  int player1_button_a = digitalRead(4);
  int player1_button_y = digitalRead(5);
  int player1_button_b = digitalRead(6);
 
  int player2_joystickRight = digitalRead(7);
  int player2_joystickUp = digitalRead(8);
  int player2_joystickLeft = digitalRead(9);
  int player2_joystickDown = digitalRead(10);
  int player2_button_a = digitalRead(11);
  int player2_button_y = digitalRead(12);
  int player2_button_b = digitalRead(13);

  int valAnalogPin0 = (analogRead(analogPin0) + 128) / 256;
  int valAnalogPin1 = (analogRead(analogPin1) + 128) / 256;
  
  if (player1_joystickUp == LOW) {
    Keyboard.press(KEY_UP_ARROW);
  } else {
    Keyboard.release(KEY_UP_ARROW);
  }
  if (player1_joystickDown == LOW) {
    Keyboard.press(KEY_DOWN_ARROW);
  } else {
    Keyboard.release(KEY_DOWN_ARROW);
  }
  if (player1_joystickLeft == LOW) {
    Keyboard.press(KEY_LEFT_ARROW);
  } else {
    Keyboard.release(KEY_LEFT_ARROW);
  }
  if (player1_joystickRight == LOW) {
    Keyboard.press(KEY_RIGHT_ARROW);
  } else {
    Keyboard.release(KEY_RIGHT_ARROW);
  }
  if (player1_button_a == LOW) {
    Keyboard.press('u');
  } else {
    Keyboard.release('u');
  }
  if (player1_button_b == LOW) {
    Keyboard.press('h');
  } else {
    Keyboard.release('h');
  }
  if (player1_button_y == LOW) {
    Keyboard.press('g');
  } else {
    Keyboard.release('g');
  }
  if (player2_joystickUp == LOW) {
    Keyboard.press('i');
  } else {
    Keyboard.release('i');
  }
  if (player2_joystickDown == LOW) {
    Keyboard.press('k');
  } else {
    Keyboard.release('k');
  }
  if (player2_joystickLeft == LOW) {
    Keyboard.press('j');
  } else {
    Keyboard.release('j');
  }
  if (player2_joystickRight == LOW) {
    Keyboard.press('l');
  } else {
    Keyboard.release('l');
  }
  if (player2_button_a == LOW) {
    Keyboard.press('e');
  } else {
    Keyboard.release('e');
  }
  if (player2_button_b == LOW) {
    Keyboard.press('s');
  } else {
    Keyboard.release('s');
  }
  if (player2_button_y == LOW) {
    Keyboard.press('c');
  } else {
    Keyboard.release('c');
  }
  if (valAnalogPin0 == 0) {
    Keyboard.press(0x0D); // Enter
  } else {
    Keyboard.release(0x0D);
  }
  if (valAnalogPin0 == 1) {
    Keyboard.press(0x20); // Space
  } else {
    Keyboard.release(0x20);
  }
  if (valAnalogPin0 == 2) {
    Keyboard.press('x');
  } else {
    Keyboard.release('x');
  }
  if (valAnalogPin1 == 0) {
    Keyboard.press('y');
  } else {
    Keyboard.release('y');
  }
  if (valAnalogPin1 == 2) {
    Keyboard.press('v');
  } else {
    Keyboard.release('v');
  }
}
