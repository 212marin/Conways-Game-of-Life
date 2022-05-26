#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include "functions.h"

int menu() {
	printf("=================");
	printf("Choose one of the following options:");
	printf("=================\n");
	printf("\t\t\tOption 1: Start the game\n");
	printf("\t\t\tOption 2: Read the rules\n");
	printf("\t\t\tOption 3: Browse the library\n");
	printf("\t\t\tOption 4: Close the program\n");
	printf("======================================================\n");

	int condition = 0;
	condition = _getch();

	switch (condition) {
	case '1':	

		break;
	case '2':
		system("cls");
		rules();
		break; 
	case '3':

		break;
	case '4':
		condition = 0;
		system("cls");
		printf("Ending program...");
		break;
	default:
		condition = 1;
		system("cls");
		break;
	}
	return condition;
}