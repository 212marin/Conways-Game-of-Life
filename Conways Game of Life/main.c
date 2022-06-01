#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include "functions.h"

int main(void) {
	int condition = 1;

	while (condition) {
		condition = menu();
		if (condition == 5)
			condition = gameMenu();
		if (condition == 3)
			condition = library();
	}

	
	return 0;
}
