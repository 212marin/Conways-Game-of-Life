#define _CRT_SECURE_NO_WARNINGS
#include "dataType.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int menu();
int gameMenu();
int library();
void rules();
CELL** gridSetup(int, int);
void gridRandomize(CELL**, int, int);
void gridOutput(CELL**, int, int);
CELL** gridDelete(CELL**, int);

#endif // FUNCTIONS_H