#include "ttt_lib.h"
#include <stdio.h>

int hori_check(char player_sym,char* matrix){
  for(int i=1; i<=9; i+=3){
    if(player_sym == matrix[i]&&matrix[i] == matrix[i+1] && matrix[i+1] == matrix[i+2]){
      return 1;
    }
  }
  return 0;
}

int verti_check(char player_sym,char* matrix){
  printf("%c\n",player_sym);
  for(int i=1; i<=9; i+=3){
    if(player_sym == matrix[i]&&matrix[i] == matrix[i+3] && matrix[i+3] == matrix[i+6]){
      return 1;
    }
  }
  return 0;
}

int diagonal_check(char player_sym,char* matrix){ 
  if(matrix[1] == player_sym && matrix[1] == matrix[5] && matrix[5] == matrix[9]){
    return 1;
  }
  if(player_sym == matrix[3]&&matrix[3] == matrix[5] && matrix[5] == matrix[7]){
    return 1;
  }
  return 0;
}


int has_won(char current_player,char* matrix) {
  int winner;
  winner = hori_check(current_player,matrix) || verti_check(current_player,matrix) || diagonal_check(current_player,matrix);
  printf("%d\n", winner);
  return winner;
}