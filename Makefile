CC := gcc
CFLAGS := -Wall -O3
LDFLAGS := -lncurses

all: bounce

clean:
	rm bounce
