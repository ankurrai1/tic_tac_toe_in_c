#include "ttt_lib.h"
#include <stdio.h>


int get_move(){
  int move;
  printf("enter your move \n");
  scanf("%d",&move);
  return move;
}

int is_valid_move(int move,char* board){
  if (board[move]==' ') {
    return 1;
  }
  return 0;
}

void place_symbol_on_pos(char player_sym,int position,char* board){
  board[position]=player_sym;
}
