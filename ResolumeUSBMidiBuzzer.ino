/* 
 *  ResolumeUSBMidiBuzzer
 *  https://github.com/marvyyyn/ResolumeUSBMidiBuzzer/
 *  
 *  
 *  todo 
 *  - add disclaimer
 *  
 *  
 *  
 *  This project is based up on the USBMIDI Library and it example code.
 *  So please make shure you installed the library from https://github.com/BlokasLabs/USBMIDI
 *  and read the licence. Thanks.
 */

#include <midi_serialization.h>
#include <usbmidi.h>

/*
 * SETUP [START]
 */
const int iBUTTON_PIN = 9;
const int iBUTTON_NOTE = 64;
/*
 * SETUP [END]
 */
 
 
int iWasButtonPressed;

/* 
  sendNote(...)
*/
void sendNote(uint8_t channel, uint8_t note, uint8_t velocity) {
  USBMIDI.write((velocity != 0 ? 0x90 : 0x80) | (channel & 0xf));
  USBMIDI.write(note & 0x7f);
  USBMIDI.write(velocity &0x7f);
}

/* 
  isButtonPressed(...)
*/
int isButtonPressed(int iDigitalPin) {
  return digitalRead(iDigitalPin) == 0;
}

/* 
  setup()
*/
void setup() {
  // Setup the taster pin at start
  pinMode(iBUTTON_PIN, INPUT);
  digitalWrite(iBUTTON_PIN, HIGH);
  iWasButtonPressed = isButtonPressed(iBUTTON_PIN);
}

/* 
  loop()
*/
void loop() {
  while (USBMIDI.available()) {
    // We must read entire available data, so in case we receive incoming
    // MIDI data, the host wouldn't get stuck.
    u8 b = USBMIDI.read();
  }

  // Get button state
  int iButtonState = isButtonPressed(iBUTTON_PIN);

  // Is state different than last time?
  if (iButtonState != iWasButtonPressed) {
    // Send defined midi note
    sendNote(0, iBUTTON_NOTE, iButtonState ? 127 : 0); // if iButtonState == 1 send 127, if not send 0
    iWasButtonPressed = iButtonState;
  }
  
  // Flush the output.
  USBMIDI.flush();
}
