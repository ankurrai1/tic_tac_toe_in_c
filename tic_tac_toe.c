#include <stdio.h> 
#include <stdlib.h>
#include "ttt_lib.h"

char get_player_sym(int);
void announce_winner(char);
void announce_draw();
void update_board(char,int,char*);


int main(void){
  char board[9];
  int move;
  init_board(board);
  display_board(board);
  for (int index = 0; index < 9; index++) {
    int player_sym=get_player_sym(index);
    move=get_move();
    if (!is_valid_move(move,board)) {
      printf("invalid move try Again\n");
      index--;
      continue;
    }
    update_board(player_sym,move,board);
    if (has_won(player_sym,board)) {
      announce_winner(player_sym);
      return 0;
    }
  }
  announce_draw();
  return 0;
}


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

void update_board(char player_sym,int position,char* board){
  system("clear");
  place_symbol_on_pos(player_sym,position,board);
  display_board(board);
}

