//www.elegoo.com
//Nathaniel Christie Song Modifications
//https://github.com/natechris-devine
//2020.31.08

#include "pitches.h"
//As you need to, comment out the songs you don't want

// We Three Kings
int melody[] = {
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4,
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4,
  NOTE_E5, NOTE_D5, NOTE_C5, NOTE_A4,
  NOTE_B4, NOTE_C5, NOTE_B4, NOTE_A4,
  NOTE_C5, NOTE_C5, NOTE_D5, NOTE_D5,
  NOTE_E5, NOTE_E5, NOTE_G5, NOTE_F5, NOTE_E5,
  NOTE_D5, NOTE_E5, NOTE_D5,
  NOTE_C5, NOTE_B4, NOTE_A4
};

int noteLen[] = {
  2,1,2,1,
  1,1,1,3,
  2,1,2,1,
  1,1,1,3,
  2,1,2,1,
  2,1,1,1,1,
  1,1,1,
  2,1,6
 };
int duration = 500;  // miliseconds
 
void setup() {
  
}
 
void loop() {  
  for (int thisNote = 0; thisNote < sizeof(melody) / sizeof(melody[0]); thisNote++) {
    // pin8 output the voice, every scale is 0.5 sencond
    tone(8, melody[thisNote], duration * noteLen[thisNote]);
     
    // Output the voice after several minutes
    delay(duration * noteLen[thisNote] + 25);
  }
   
  // restart after two seconds 
  delay(2000);
}
