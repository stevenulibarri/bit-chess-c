# bit-chess-c

Learning C/make by implementing a simple console chess game.  

## Compile and Run
Linux (assumes gcc for now)
```sh
make
./bin/bit-chess
```

Wandows (needs visual studio dev tools + a windows sdk)  
Run in `Developer Powershell for VS`  
I started [here](https://learn.microsoft.com/en-us/cpp/build/walkthrough-compile-a-c-program-on-the-command-line?view=msvc-170)
```pwsh
cl /Foout\ /std:c11 /Wall .\src\bit-chess.c .\src\utils.c /link /out:.\bin\bit-chess.exe
.\bin\bit-chess.exe
```

## Goals
1. Reasonably concise board state representation.
2. Handle all standard rules (castling, [en passant](https://en.wikipedia.org/wiki/En_passant), promotion).
3. Parse/validate/output [algebraic notation](https://en.wikipedia.org/wiki/Algebraic_notation_(chess)) (probably ignore less common but still valid variations).

## Not Goals
1. Not building a chess engine; maybe later though.

## Stretch Goals
1. Optionally output [PGN markup](https://en.wikipedia.org/wiki/Algebraic_notation_(chess)#PGN) instead of only notation.
2. GUI (maybe raylib?)

## Design
The board is an array of 8 32-bit unsigned ints.  
Each piece is represented by 4 bits, the 4th bit indicates color.  
State flags for turn, castling allowed, check, en passant are stored in 1 byte.