#include "ttt_lib.h"
#include <stdio.h>

int hori_check(char player_sym){
  for(int i=0; i<3; i++){
    if(player_sym == matrix[i][0]&&matrix[i][0] ==matrix[i][1] && matrix[i][0]==matrix[i][2]){
      return 1;
    }
  }
  return 0;
}

int verti_check(char player_sym){
  printf("%c\n",player_sym);
  for(int i=0; i<3; i++){
    if(player_sym==matrix[0][i]&&matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i]){
      return 1;
    }
  }
  return 0;
}

int diagonal_check(char player_sym){ 
  if(matrix[0][0] == player_sym && matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2]){
    return 1;
  }
  if(player_sym == matrix[0][2]&&matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0]){
    return 1;
  }
  return 0;
}


int check_winner(char current_player) {
  int winner;
  winner = hori_check(current_player) || verti_check(current_player) || diagonal_check(current_player);
  printf("%d\n", winner);
  return winner;
}