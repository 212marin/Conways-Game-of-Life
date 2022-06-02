#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "functions.h"
#include "dataType.h"

int gameMenu() {
	system("cls");
	printf("Input the desired grid size (x y):\n");
	int gridX, gridY;
	int value1 = scanf("%d %d", &gridX, &gridY);
	system("cls");

	CELL** mainGrid = gridSetup(gridX, gridY);
	gridRandomize(mainGrid, gridX, gridY);
	gridOutput(mainGrid, gridX, gridY);

	mainGrid = gridDelete(mainGrid, gridX);
	system("pause");

	system("cls");
	return 1;
}