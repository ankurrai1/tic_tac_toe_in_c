#include <stdio.h> 
#include "ttt_lib.h"

void show_game_result(char);
void show_winner(char);

int main(void){
  char winner_symbol;
  printf(" Tic Tac Toe.\n");
  winner_symbol=get_game_result();
  show_game_result(winner_symbol);
  disp_matrix();
  return 0;
}

void show_game_result(char winner_symbol){
  if (winner_symbol=='D') {
    printf("Match Draw !\n");
  }else{
    show_winner(winner_symbol);
  }
}

void show_winner(char winner_symbol){
  if(winner_symbol=='O'){
    printf("player 1 won!\n");
  }else{
    printf("player 2 won!!!!\n");
  } 
}

