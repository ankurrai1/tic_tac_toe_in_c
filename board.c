#include "ttt_lib.h"
#include <stdio.h>

void init_board(char* board) {
  for(int i=1; i <= 9; i++){
    board[i] = ' ';
  }
} 

void display_board(char* board) {
  for(int index=1; index<=9; index+=3) {
    printf(" %c | %c | %c ",board[index], board[index+1], board[index+2]);
    if(index < 6){
      printf("\n---|---|---\n");
    }
  }
  printf("\n");
}
