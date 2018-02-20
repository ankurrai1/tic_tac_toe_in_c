#include <stdio.h> 
#include "ttt_lib.h"

void show_winner(char);

int main(void){
  int turn=1;
  char winner_symbol;
  printf(" Tic Tac Toe.\n");
  winner_symbol=continue_game();
  show_winner(winner_symbol);
  disp_matrix();
  return 0;
}

void show_winner(char winner_symbol){
  if(winner_symbol=='O'){
    printf("player 1 won!\n");
  }else{
    printf("player 2 won!!!!\n");
  } 
}
