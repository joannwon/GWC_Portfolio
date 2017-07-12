//#include "pitches.h"
//
//int melody[] = {
//  NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_E4, NOTE_D4, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_C4, NOTE_B3, NOTE_C4, NOTE_C4, NOTE_D4, NOTE_E4, NOTE_F4,
//  NOTE_E4, NOTE_D4, NOTE_C4, NOTE_B3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4, NOTE_C4, NOTE_A3, NOTE_B3, NOTE_A3, NOTE_G3, NOTE_A3, NOTE_B3, NOTE_C4
//};
//
//int noteDurations[] = {
//  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 
//};
//
//void setup() {
//
//  for (int thisNote = 0; thisNote <34; thisNote++) {
//    int noteDuration = 1000 / noteDurations[thisNote];
//    tone(8, melody[thisNote], noteDuration);
//
//    int pauseBetweenNotes = noteDuration * 1.30;
//    delay(pauseBetweenNotes);
//
//  }
//}
//
//void loop() {
//  // no need to repeat the melody.
//}
