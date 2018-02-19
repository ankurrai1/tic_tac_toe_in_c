#include "ttt_lib.h"
#include <stdlib.h> 
#ifndef CONTINUE_GAME
#define CONTINUE_GAME

char continue_game(int turn){
  char done = ' ';
  init_matrix();
  do {
    disp_matrix();
    get_player_move(turn);
    turn++;
    done = check();
    if(done!= ' ')
    break;
    disp_matrix();
    get_player_move(turn);
    turn++;
    system("clear");
    done = check();
  } while(done== ' ');
  return done;
}
#endif //CONTINUE_GAME