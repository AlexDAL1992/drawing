#include <stdio.h>
#include "menu.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "horizon.h"
#include "intersect.h"

int main(void){
	printf("===== WELCOME TO THE DRAWING GAME =====\n");
	int option; // create a variable to control selection
	option = getOption(); // display menu and get option from user input
	while(option != 7){ // exit game when user inputs 7
		if(option == 1) // option 1 is to draw rectangle
			drawRectangle();
		else if(option == 2) // option 2 is to draw square
			drawSquare();
		else if(option == 3) // option 3 is to draw circle
			drawCircle();
		else if(option == 4) // option 4 is to draw triangle
			drawTriangle();
		else if(option == 5){ // option 5 is to draw horizontal line
			printf("\n\n\n");
			drawHorizon();
			printf("\n\n\n");
		}
		else if(option == 6) // option 6 is to draw 2 intersecting lines
			drawIntersect();
		else // if option is not integer from 1 to 7, print error message
			printf("\nInvalid selection.");
		printf("\n\n");
		option = getOption(); // asks again for the next option other than 7
	}
	// when exiting the game, print out information line
	printf("Thank you for playing with us!\n");
	return 0;
}
