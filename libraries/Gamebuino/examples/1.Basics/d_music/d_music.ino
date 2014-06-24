#include <SPI.h>
#include <Gamebuino.h>
Gamebuino gb;

const uint16_t myTrack1[] PROGMEM = {0x0005,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x450,0x4FC,0x450,0x4FC,0x480,0x4FC,0x4FC,0x450,0x4FC,0x450,0x480,0x4FC,0x488,0x4FC,0x488,0x4FC,0x440,0x4FC,0x440,0x4FC,0x470,0x4FC,0x4FC,0x440,0x4FC,0x440,0x470,0x4FC,0x478,0x4FC,0x478,0x4FC,0x438,0x4FC,0x438,0x4FC,0x468,0x4FC,0x4FC,0x438,0x4FC,0x438,0x468,0x4FC,0x470,0x4FC,0x470,0x4FC,0x438,0x4FC,0x438,0x4FC,0x468,0x4FC,0x4FC,0x438,0x4FC,0x438,0x468,0x4FC,0x47C,0x4FC,0x478,0x4FC,0x0000};
const uint16_t myTrack2[] PROGMEM = {0x0005,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x4B0,0x4FC,0x4B0,0x4FC,0x4E8,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4E0,0x4FC,0x4FC,0x4FC,0x4F8,0x4FC,0x4A0,0x4FC,0x4A0,0x4FC,0x4D8,0x4FC,0x4FC,0x4D0,0x4FC,0x4FC,0x4D0,0x4FC,0x4EC,0x4FC,0x4E8,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x498,0x4FC,0x498,0x4FC,0x4D0,0x4FC,0x4FC,0x4C8,0x4FC,0x4FC,0x4C8,0x4FC,0x4E4,0x4FC,0x4E0,0x4FC,0x0000};
const uint16_t myTrack3[] PROGMEM = {0x0045,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x4FC,0x498,0x498,0x498,0x408,0x468,0x408,0x468,0x498,0x468,0x4FC,0x468,0x4FC,0x468,0x468,0x4FC,0x408,0x498,0x498,0x498,0x408,0x468,0x408,0x468,0x498,0x468,0x4FC,0x468,0x4FC,0x468,0x468,0x4FC,0x408,0x498,0x498,0x498,0x408,0x468,0x408,0x468,0x498,0x468,0x4FC,0x468,0x4FC,0x468,0x468,0x4FC,0x408,0x498,0x498,0x498,0x408,0x468,0x408,0x468,0x498,0x468,0x4FC,0x468,0x4FC,0x468,0x468,0x4FC,0x408,0x0000};

///////////////////////////////////// SETUP
void setup() {
  Serial.begin(115200);
  gb.begin();
  gb.titleScreen(F("Sound demo"));
  gb.sound.playTrack(myTrack1,0);
  gb.sound.playTrack(myTrack2,1);
  gb.sound.playTrack(myTrack3,2);
}

void loop(){
  if(gb.update()){
    if(gb.buttons.pressed(BTN_A)){
      gb.sound.playOK();
    }
    if(gb.buttons.pressed(BTN_B)){
      gb.sound.playCancel();
    }
    if(gb.buttons.pressed(BTN_C)){
      gb.sound.playCancel();
      gb.titleScreen(F("Sound demo"));
    }
  }
}
