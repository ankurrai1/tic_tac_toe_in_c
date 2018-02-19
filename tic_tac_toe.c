#include <stdio.h> 
#include "ttt_lib.h"


int main(void){
  int turn=1;
  char done;
  printf("This is the game of Tic Tac Toe.\n");
  done=continue_game(turn);
  if(done=='X')
  printf("player 2 won!\n");
  else 
  printf("player 1 won!!!!\n");
  disp_matrix();
  return 0;
}
