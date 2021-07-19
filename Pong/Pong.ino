#include <Arduboy2.h>
//Global Variables
Arduboy2 arduboy;

void setup() {
  arduboy.begin();
  arduboy.clear();
  arduboy.setFrameRate(60);
}

void loop() {
  if(!arduboy.nextFrame()){
    return;
  }
  arduboy.clear();
  //Game code here
  arduboy.display();
}
