#pragma once
#define width 25 //change the field
#define height 25 //change the field
char field[width][height];
enum side {
	up,
	right,
	left,
	down
};
int startpos;
int choose_2walls;
void zeroedfield(char field[width][height]);
void printfield(char field[width][height]);
void random_path(int choose_2walls);
