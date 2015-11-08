#include <ncurses.h>
#include <unistd.h>
#include <stdio.h>

#define DELAY 30000

int main()
{
	initscr();
	noecho();
	curs_set(FALSE);

	int max_x, max_y;
	getmaxyx(stdscr, max_y, max_x);

	int x = 0, y = 0;
	int dir_x = 1, dir_y = 1;
	for (;;) {
		clear();
		mvprintw(y, x, "o");
		refresh();

		usleep(DELAY);

		x += dir_x;
		if (x == 0 || x >= max_x)
			dir_x = -dir_x;
		y += dir_y;
		if (y == 0 || y >= max_y)
			dir_y = -dir_y;
	}

	endwin();
	return 0;
}
