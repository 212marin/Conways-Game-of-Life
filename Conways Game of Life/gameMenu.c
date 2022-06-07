#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "functions.h"
#include "dataType.h"

int gameMenu() {
	int gridX = 0, gridY = 0;
	int* x = &gridX;
	int* y = &gridY;

	gridChooseSize(x,y);
	system("cls");

	CELL** mainGrid = gridSetup(gridX, gridY);
	CELL** oldGrid = gridSetup(gridX, gridY);
	gridRandomize(mainGrid, gridX, gridY);
	gridOutput(mainGrid, gridX, gridY);
	/*printf("How many generations do you want this game to last? ");
	int gameDuration;
	warningTemp = scanf("%d", &gameDuration);*/





	mainGrid = gridDelete(mainGrid, gridX);
	oldGrid = gridDelete(oldGrid, gridX);
	warningTemp = _getch();

	system("cls");
	return 1;
}