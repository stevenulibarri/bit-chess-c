#include <stdio.h>
#include <stdint.h>
#include "../include/order32.h"
#include "../include/consts.h"

// from https://stackoverflow.com/a/61109975
uint8_t reverse_byte(uint8_t b)
{
  b = (b & 0xF0) >> 4 | (b & 0x0F) << 4;
  b = (b & 0xCC) >> 2 | (b & 0x33) << 2;
  b = (b & 0xAA) >> 1 | (b & 0x55) << 1;
  return b;
}

void print_piece_bits(uint8_t byte)
{
  // makes more sense to my brain to print them big endian
  if (O32_HOST_ORDER == O32_LITTLE_ENDIAN)
  {
    byte = reverse_byte(byte);
  }
  byte >>= 4;
  for (int i = 0; i < 4; i++)
  {
    printf("%u", byte & 1);
    byte >>= 1;
  }
}

void print_board_bits(uint32_t* board)
{
  printf("%s\n", BOARD_TOP_STR);
  for (int i = RANK_8_IDX; i >= RANK_1_IDX; i--) {
    printf("%d |", i + 1);
    uint32_t row = board[i];

    for (int j = FILE_1_IDX; j <= FILE_8_IDX; j++) {
      uint8_t piece_bits = row & 0x0f;
      // char piece_char = char_for_piece(piece_bits);
      print_piece_bits(piece_bits);
      printf("|");
      row >>= 4;
    }
    printf("\n");
  }
  printf("%s\n", BOARD_FILE_STR);
}