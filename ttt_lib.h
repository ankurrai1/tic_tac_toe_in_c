#ifndef TTT_LIB_H
#define TTT_LIB_H

char matrix[3][3];
int check_winner(char);
void init_matrix(void);
void get_player_move(int);
void disp_matrix(void);
char get_game_result(void);

#endif //TTT_LIB_H
