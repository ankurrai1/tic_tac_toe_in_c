#include "ttt_lib.h"
#include <stdio.h>

void init_matrix(void) { 
  int i, j;
  for(i=0; i<3; i++){
    for(j=0; j<3; j++){
      matrix[i][j] = ' ';
    }
  }
} 

void disp_matrix(void) {
  int index;
  for(index=0; index<3; index++) {
    printf(" %c | %c | %c ",matrix[index][0], matrix[index][1], matrix[index][2]);
    if(index!=2){
      printf("\n---|---|---\n");
    }
  }
  printf("\n");
}
