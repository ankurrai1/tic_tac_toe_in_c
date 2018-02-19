#include "ttt_lib.h"
#include <stdio.h>
#ifndef CHECK_H

#define CHECK_H
char check(void) {
  int i;
  for(i=0; i<3; i++)
  if(matrix[i][0]==matrix[i][1] && matrix[i][0]==matrix[i][2])
  return matrix[i][0];
  for(i=0; i<3; i++)
  if(matrix[0][i]==matrix[1][i] && matrix[0][i]==matrix[2][i])
  return matrix[0][i];
  if(matrix[0][0]==matrix[1][1] && matrix[1][1]==matrix[2][2])
  return matrix[0][0];
  if(matrix[0][2]==matrix[1][1] && matrix[1][1]==matrix[2][0])
  return matrix[0][2];
  getchar();
  return ' ';
}
#endif //CHECK_H