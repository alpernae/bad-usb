#include "DigiKeyboard.h"
void setup() {

  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.delay(150);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(300);
  DigiKeyboard.print("notepad");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Just HELLO WORLD! ");

}

void loop() {


}
