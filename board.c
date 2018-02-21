#include "ttt_lib.h"
#include <stdio.h>

void init_board(char* board) {
  for(int i=0; i < 9; i++){
    board[i] = ' ';
  }
} 

void display_board(char* board) {
  int index=3;
  printf(" %c | %c | %c ",board[0], board[1], board[2]);
  for(int counter=0; counter<2; counter++) {
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ",board[index], board[index+1], board[index+2]);
    index+=3;
  }
  printf("\n");
}
