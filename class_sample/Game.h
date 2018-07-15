#ifndef _INC_GAME_
#define _INC_GAME_
#include <iostream>
#include "Player.h"
#include "Human.h"
#include "AI.h"

class Game {
  private:
    Human player0;
    AI    player1;
    Player *point;
  public:
    Game();
    void show();
};
#endif