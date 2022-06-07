#define _CRT_SECURE_NO_WARNINGS
#include "dataType.h"

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

int warningTemp;
int menu();
int gameMenu();
int library();
void rules();
int gameChooseType();
void gridCustomSize(int*, int*);
void gridChooseSize(int*, int*);
CELL** gridSetup(int, int);
void gridRandomize(CELL**, int, int);
void gridOutput(CELL**, int, int);
CELL** gridDelete(CELL**, int);
CELL** gridNextGen(CELL**, CELL**, int, int);
CELL checkCellNeigbours(CELL**, CELL);


#endif // FUNCTIONS_H