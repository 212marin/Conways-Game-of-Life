#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "functions.h"
#include "dataType.h"

void rules() {
	printf("\t\t\t==============EN===============\n");
	printf("Conway's game of life is a zero-player game made by the British mathematician John Horton Conway in 1970. \nIn it you create an initial configuration and observe how it evolves over time.\n\n"
		"The universe of the Game of Life is an infinite, two - dimensional orthogonal grid of square cells, each of which is in one of two possible states, live or dead.\nEvery cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent.\nAt each step in time, the following transitions occur: \n\n"

		"\t1. Any live cell with two or three live neighbours survives.\n"
		"\t2. Any dead cell with three live neighbours becomes a live cell.\n"
		"\t3. All other live cells die in the next generation.Similarly, all other dead cells stay dead.\n\n"
	"The initial pattern constitutes the seed of the system.\nThe rules continue to be applied repeatedly to create further generations.\n");
	printf("\t\t\t=============================\n");

	int value1 = _getch();
	system("cls");
}

CELL** gridSetup(int t1, int t2){
	CELL** grid = (CELL**)calloc(t1, sizeof(CELL*));
	if (grid == NULL) {
		system("cls");
		perror("Creating grid error: ");
		exit(EXIT_FAILURE);
	}
	int i = 0, j = 0;
	for (i = 0; i < t1; i++) {
		*(grid + i) = (CELL*)calloc(t2, sizeof(CELL));
		if (*(grid + i) == NULL) {
			system("cls");
			perror("Creating grid error: ");
			exit(EXIT_FAILURE);
		}
	}

	return grid;
}

void gridRandomize(CELL** grid, int t1, int t2) {
	int i = 0, j = 0, temp = 0;

	for (i = 0; i < t1; i++) {
		for (j = 0; j < t2; j++) {
			temp = rand() % 2;
			if (temp == 0)
				(*(*(grid + i) + j)).state = 0;
			else
				(*(*(grid + i) + j)).state = 1;
		}
	}
}

void gridOutput(CELL** grid, int t1, int t2) {
	int i = 0, j = 0, temp = 0;
	for (i = 0; i < t1; i++) {
		for (j = 0; j < t2; j++) {
			temp = (*(*(grid + i) + j)).state;
			if (temp == 0)
				printf("-");
			else
				printf("*");
		}
		printf("\n");
	}
}

CELL** gridDelete(CELL** grid, int t1) {
	int i = 0;
	for (i = 0; i < t1; i++) {
		free(*(grid + i));
	}
	free(grid);
	return NULL;
}