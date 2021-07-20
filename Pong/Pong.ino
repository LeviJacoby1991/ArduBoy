#include <Arduboy2.h>
//Global Variables
Arduboy2 arduboy;
Rect playerPaddle;
void setup() {
  arduboy.begin();
  arduboy.clear();
  playerPaddle = Rect()
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
