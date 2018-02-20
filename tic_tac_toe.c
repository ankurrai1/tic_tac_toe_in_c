#include <stdio.h> 
#include "ttt_lib.h"

void show_game_result(char);
void show_winner(char);

int main(void){
  char game_result;
  printf(" Tic Tac Toe.\n");
  game_result=get_game_result();
  show_game_result(game_result);
  disp_matrix();
  return 0;
}

void show_game_result(char game_result){
  if (game_result=='D') {
    printf("Match Draw !\n");
  }else{
    show_winner(game_result);
  }
}

void show_winner(char winner_symbol){
  if(winner_symbol=='O'){
    printf("player 1 won!\n");
  }else{
    printf("player 2 won!!!!\n");
  } 
}

