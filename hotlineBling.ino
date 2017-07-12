#include "pitches.h"


int melody[] = {
  NOTE_D4, NOTE_D4, NOTE_D4, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_E4, NOTE_C4, 0, 0, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_E4, NOTE_C4, NOTE_A3, NOTE_F4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_D4,
  NOTE_C5, NOTE_C5, NOTE_D5, 0, 0, NOTE_G4, NOTE_A4, NOTE_G4, NOTE_F4, NOTE_G4, NOTE_G4, NOTE_A4, 0, 0, NOTE_C5, NOTE_C5, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_C5, NOTE_D5, 0, 0, NOTE_G4, NOTE_A4, NOTE_G4, 
  NOTE_F4, NOTE_G4, NOTE_G4, NOTE_A4, 0, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5, NOTE_A4, NOTE_C5  
};

int noteDurations[] = {
  4, 4, 4, 4, 4, 4, 4, 2, 2, 2, 2, 4, 4, 4, 4, 2, 2, 2, 4, 4, 4, 4, 4, 2, 2, 2, 4, 4, 4, 4, 4, 4, 4, 2, 2, 2, 4, 4, 4, 4, 4, 4, 2, 2, 2, 4, 4, 4, 4, 4, 4, 2, 2, 4, 4, 4, 4, 4, 4, 4, 4
};

void setup() {

  
while(true){
  for (int thisNote = 0; thisNote <60; thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

  }
}
}

void loop() {
  // no need to repeat the melody.
}
