#include "ttt_lib.h"
#include <stdio.h>

void insert_symbol(int,int,int);
void show_turn(int);

void get_player_move(int turn) {
  int x, y;
  show_turn(turn);
  printf("Enter X,Y coordinates for your move: ");
  scanf("%d%*c%d", &x, &y);
  x--;
  y--;
  if(matrix[x][y] != 'X' && matrix[x][y] != 'O'){
    insert_symbol(turn,x,y);
  } else {
    printf("Invalid move, try again.\n");
    get_player_move(turn);
  }
}

void insert_symbol(int turn,int x,int y) { 
  if (turn%2==0) {
    matrix[x][y] = 'X';
  } else{
    matrix[x][y] = 'O';;
  }
}

void show_turn(int turn){
  if (turn%2==0) {
    printf("player 2 turn\n");
  }
  else{
    printf("player 1 turn\n");
  }
}
