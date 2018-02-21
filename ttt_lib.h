#ifndef TTT_LIB_H
#define TTT_LIB_H

  int has_won(char,char*);
  void init_board(char*);
  int get_move();
  int is_valid_move(int,char*);
  void place_symbol_on_pos(char,int,char*);
  void display_board(char*);
  char get_game_result(void);

#endif //TTT_LIB_H
