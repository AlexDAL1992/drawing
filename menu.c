#include <stdio.h>
#include "menu.h"

void displayMenu(void){
	printf("Main menu:\n");
	printf("1. Draw Rectangle\n");
	printf("2. Draw Square\n");
	printf("3. Draw Circle\n");
	printf("4. Draw Triangle\n");
	printf("5. Draw Horizontal line\n");
	printf("6. Draw Intersecting lines\n");
	printf("7. Exit\n");
}

int getOption(void){
	displayMenu();
	int option;
	printf("Please enter your selection: ");
	scanf("%d", &option);
	return option;
}
