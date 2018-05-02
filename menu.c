#include <stdio.h>
#include "menu.h"
/*
	Function description:
	This function displays the main menu of the program.
	This function lists down all selections available to users.
	Argument: none
	Return: none
*/
void displayMenu(void){ // prints all the options available for users to select
	printf("Main menu:\n");
	printf("1. Draw Rectangle\n");
	printf("2. Draw Square\n");
	printf("3. Draw Circle\n");
	printf("4. Draw Triangle\n");
	printf("5. Draw Horizontal line\n");
	printf("6. Draw Intersecting lines\n");
	printf("7. Exit\n");
}

/*
	Function description:
	This function takes input from user and return it to the main program.
	This function displays menu, asks user for input and returns it.
	Argument: none
	Return: user input integer
*/
int getOption(void){
	displayMenu(); // prints the menu
	int option; // variable to save user's selection
	printf("Please enter your selection: "); // asks user to enter selection
	scanf("%d", &option); // saves selection to variable created above
	return option; // returns the selection taken before
}
