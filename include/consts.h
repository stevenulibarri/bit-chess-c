
#ifndef BIT_CHESS_CONSTS_H
#define BIT_CHESS_CONSTS_H

#define WHITE_MASK 0x08
#define BLACK_MASK 0X00

#define BLANK  0x00

#define KING   0x01
#define QUEEN  0x02
#define BISHOP 0x03
#define KNIGHT 0x04
#define ROOK   0x05
#define PAWN   0x06

#define WHITE_KING   (KING   | WHITE_MASK)
#define WHITE_QUEEN  (QUEEN  | WHITE_MASK)
#define WHITE_BISHOP (BISHOP | WHITE_MASK)
#define WHITE_KNIGHT (KNIGHT | WHITE_MASK)
#define WHITE_ROOK   (ROOK   | WHITE_MASK)
#define WHITE_PAWN   (PAWN   | WHITE_MASK)

#define BLACK_KING   (KING   | BLACK_MASK)
#define BLACK_QUEEN  (QUEEN  | BLACK_MASK)
#define BLACK_BISHOP (BISHOP | BLACK_MASK)
#define BLACK_KNIGHT (KNIGHT | BLACK_MASK)
#define BLACK_ROOK   (ROOK   | BLACK_MASK)
#define BLACK_PAWN   (PAWN   | BLACK_MASK)

#define INITIAL_RANK_1 (\
  WHITE_ROOK   << 28 |\
  WHITE_KNIGHT << 24 |\
  WHITE_BISHOP << 20 |\
  WHITE_KING   << 16 |\
  WHITE_QUEEN  << 12 |\
  WHITE_BISHOP << 8  |\
  WHITE_KNIGHT << 4  |\
  WHITE_ROOK\
)
#define INITIAL_RANK_2 (\
  WHITE_PAWN << 28 |\
  WHITE_PAWN << 24 |\
  WHITE_PAWN << 20 |\
  WHITE_PAWN << 16 |\
  WHITE_PAWN << 12 |\
  WHITE_PAWN << 8  |\
  WHITE_PAWN << 4  |\
  WHITE_PAWN\
)
#define INITIAL_RANK_7 (\
  BLACK_PAWN << 28 |\
  BLACK_PAWN << 24 |\
  BLACK_PAWN << 20 |\
  BLACK_PAWN << 16 |\
  BLACK_PAWN << 12 |\
  BLACK_PAWN << 8  |\
  BLACK_PAWN << 4  |\
  BLACK_PAWN\
)
#define INITIAL_RANK_8 (\
  BLACK_ROOK   << 28 |\
  BLACK_KNIGHT << 24 |\
  BLACK_BISHOP << 20 |\
  BLACK_KING   << 16 |\
  BLACK_QUEEN  << 12 |\
  BLACK_BISHOP << 8  |\
  BLACK_KNIGHT << 4  |\
  BLACK_ROOK\
)

#define RANK_1_IDX 0
#define RANK_2_IDX 1
#define RANK_3_IDX 2
#define RANK_4_IDX 3
#define RANK_5_IDX 4
#define RANK_6_IDX 5
#define RANK_7_IDX 6
#define RANK_8_IDX 7

#define FILE_1_IDX 0
#define FILE_2_IDX 1
#define FILE_3_IDX 2
#define FILE_4_IDX 3
#define FILE_5_IDX 4
#define FILE_6_IDX 5
#define FILE_7_IDX 6
#define FILE_8_IDX 7

#define BOARD_TOP_STR  "   _ _ _ _ _ _ _ _"
#define BOARD_FILE_STR "   A B C D E F G H"

#define BLANK_CHAR        '_'
#define WHITE_KING_CHAR   'K'
#define WHITE_QUEEN_CHAR  'Q'
#define WHITE_BISHOP_CHAR 'B'
#define WHITE_KNIGHT_CHAR 'N'
#define WHITE_ROOK_CHAR   'R'
#define WHITE_PAWN_CHAR   'P'
#define BLACK_KING_CHAR   'k'
#define BLACK_QUEEN_CHAR  'q'
#define BLACK_BISHOP_CHAR 'b'
#define BLACK_KNIGHT_CHAR 'n'
#define BLACK_ROOK_CHAR   'r'
#define BLACK_PAWN_CHAR   'p'

#define RANK_1_CHAR '1'
#define RANK_2_CHAR '2'
#define RANK_3_CHAR '3'
#define RANK_4_CHAR '4'
#define RANK_5_CHAR '5'
#define RANK_6_CHAR '6'
#define RANK_7_CHAR '7'
#define RANK_8_CHAR '8'

#define FILE_1_CHAR 'A'
#define FILE_2_CHAR 'B'
#define FILE_3_CHAR 'C'
#define FILE_4_CHAR 'D'
#define FILE_5_CHAR 'E'
#define FILE_6_CHAR 'F'
#define FILE_7_CHAR 'G'
#define FILE_8_CHAR 'H'

#endif
