/* This code is from https://arduino.stackexchange.com/questions/16698/arduino-constant-clock-output */

const byte CLOCKOUT = 9;   // Uno, Duemilanove, etc.


void setup ()
  {
  // set up 8 MHz timer on CLOCKOUT (OC1A)
  pinMode (CLOCKOUT, OUTPUT); 
  // set up Timer 1
  TCCR1A = bit (COM1A0);  // toggle OC1A on Compare Match
  TCCR1B = bit (WGM12) | bit (CS10);   // CTC, no prescaling
  OCR1A =  0;       // output every cycle
  }  // end of setup

void loop () {  }