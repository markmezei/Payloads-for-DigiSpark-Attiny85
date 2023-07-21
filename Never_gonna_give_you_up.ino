#include "DigiKeyboard.h"

void setup(){
    DigiKeyboard.sendKeyStroke(0);
    DigiKeyboard.delay(2000);
    DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
    DigiKeyboard.delay(100);
    DigiKeyboard.println("powershell.exe");
    DigiKeyboard.delay(1000);
    DigiKeyboard.println("Start-Process -FilePath *location of your browser's executable file* -ArgumentList 'https://www.youtube.com/watch?v=dQw4w9WgXcQ'");
}
void loop(){


  
}
