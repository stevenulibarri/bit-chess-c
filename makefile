CLFAGS=-Iinclude -Wall -Wextra -std=c11 -pedantic

SRC_FILES := $(wildcard src/*.c)
DEP_FILES := $(wildcard include/*.h)
OBJ_FILES := $(patsubst src/%.c, out/%.o, $(SRC_FILES))

bit-chess: $(OBJ_FILES)
	gcc -o bin/$@ $^ $(CLFAGS)

./out/%.o: src/%.c $(DEP_FILES)
	gcc -c -o $@ $< $(CLFAGS)

clean:
	rm out/*.o
	rm bin/*
