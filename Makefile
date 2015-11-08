CC := gcc
CFLAGS := -Wall -O3
LDFLAGS := -lncurses

all: demo

clean:
	rm demo
