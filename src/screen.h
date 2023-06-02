#ifndef SCREEN_H
#define SCREEN_H

#include <curses.h>
#include <ctype.h>

#include "data_structures.h"
#include "data_input.h"
#include "keyboard_input.h"

/* Global */
extern int X, Y;

/* Declarations */
void draw(char c);
void draw_at_position(char c, position xyz);
void display_message(WINDOW* wnd, position xy, char* msg);
int draw_map(cell* map_cells, size_t map_length);

/* Depricated */
void draw_play_area(int X, int Y);


#endif /* SCREEN_H */