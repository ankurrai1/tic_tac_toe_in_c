#include <stdio.h> 
#include <stdlib.h>
#include "ttt_lib.h"


char get_player_sym(int index){ 
  char players_symbol[]={'X','O'};
  return players_symbol[index%2];
}

void announce_winner(char winner_sym){
  printf("player with symbol %c won\n",winner_sym);
}

void announce_draw(){
  printf("Match Draw !!!\n");
}

// main function is too large.

int main(void){
  char board[9];
  int move;
  init_board(board);
  for (int index = 0; index < 9; index++) {
    display_board(board);
    int current_player_sym=get_player_sym(index);
    move=get_move();
    if (is_valid_move(move,board)) {
      store_move(current_player_sym,move,board);
      if (has_won(current_player_sym,board)) {
        display_board(board);
        announce_winner(current_player_sym);
        return 0;
      }
      system("clear");
    }else{
      printf("invalid move try Again\n");
      index--;
    }
  }
  announce_draw();
  return 0;
}
