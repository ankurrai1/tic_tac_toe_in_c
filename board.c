#include "ttt_lib.h"
#include <stdio.h>

void init_matrix(void) { 
  int i, j;
  for(i=0; i<3; i++)
  for(j=0; j<3; j++) 
  matrix[i][j] = ' ';
} 

void disp_matrix(void) {
  int t;
  for(t=0; t<3; t++) {
    printf(" %c | %c | %c ",matrix[t][0], matrix[t][1], matrix [t][2]);
    if(t!=2)
    printf("\n---|---|---\n");
  }
  printf("\n");
}
