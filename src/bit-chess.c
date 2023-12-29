#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <ctype.h>
#include "../include/utils.h"
#include "../include/consts.h"

void init_board(uint32_t *board)
{
  board[RANK_1_IDX] = INITIAL_RANK_1;
  board[RANK_2_IDX] = INITIAL_RANK_2;
  board[RANK_3_IDX] = 0;
  board[RANK_4_IDX] = 0;
  board[RANK_5_IDX] = 0;
  board[RANK_6_IDX] = 0;
  board[RANK_7_IDX] = INITIAL_RANK_7;
  board[RANK_8_IDX] = INITIAL_RANK_8;
}

char char_for_piece(uint8_t piece_bits)
{
  char out_char = -1;

  switch(piece_bits) {
    case BLANK:
      out_char = BLANK_CHAR;
      break;
    case WHITE_PAWN:
      out_char = WHITE_PAWN_CHAR;
      break;
    case PAWN:
      out_char = BLACK_PAWN_CHAR;
      break;
    case WHITE_ROOK:
      out_char = WHITE_ROOK_CHAR;
      break;
    case ROOK:
      out_char = BLACK_ROOK_CHAR;
      break;
    case WHITE_KNIGHT:
      out_char = WHITE_KNIGHT_CHAR;
      break;
    case KNIGHT:
      out_char = BLACK_KNIGHT_CHAR;
      break;
    case WHITE_BISHOP:
      out_char = WHITE_BISHOP_CHAR;
      break;
    case BISHOP:
      out_char = BLACK_BISHOP_CHAR;
      break;
    case WHITE_QUEEN:
      out_char = WHITE_QUEEN_CHAR;
      break;
    case QUEEN:
      out_char = BLACK_QUEEN_CHAR;
      break;
    case WHITE_KING:
      out_char = WHITE_KING_CHAR;
      break;
    case KING:
      out_char = BLACK_KING_CHAR;
      break;
  }

  return out_char;
}

void print_board(uint32_t* board)
{
  //    _ _ _ _ _ _ _ _ 
  // 8 |r|n|b|q|k|b|n|r|
  // 7 |p|p|p|p|p|p|p|p|
  // 6 |_|_|_|_|_|_|_|_|
  // 5 |_|_|_|_|_|_|_|_|
  // 4 |_|_|_|_|_|_|_|_|
  // 3 |_|_|_|_|_|_|_|_|
  // 2 |P|P|P|P|P|P|P|P|
  // 1 |R|N|B|Q|K|B|N|R|
  //    A B C D E F G H 

  printf("%s\n", BOARD_TOP_STR);
  for (int i = RANK_8_IDX; i >= RANK_1_IDX; i--) {
    printf("%d |", i + 1);
    uint32_t row = board[i];

    for (int j = FILE_1_IDX; j <= FILE_8_IDX; j++) {
      uint8_t piece_bits = row & 0x0F;
      char piece_char = char_for_piece(piece_bits);
      printf("%c|", piece_char);
      row >>= 4;
    }
    printf("\n");
  }
  printf("%s\n", BOARD_FILE_STR);
}

int main(void)
{
  uint32_t* board;
  board = malloc(sizeof(*board) * 8);

  init_board(board);
  print_board(board);
  print_board_bits(board);

  free(board);

  char x;
  printf("\npress any key to exit uwu");
  scanf("%c", &x);

  return 0;
}
