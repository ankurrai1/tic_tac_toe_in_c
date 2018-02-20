#include "ttt_lib.h"
#include <stdlib.h> 

char continue_game(void){
  char done;
  int turn = 0;
  char player_sym[2] ={'X','O'}; 
  init_matrix();
  do {
    turn++;
    disp_matrix();
    get_player_move(turn);
    done = check_winner((player_sym[turn%2]));
    system("clear");
  } while(!done);
  return player_sym[turn%2];
}
