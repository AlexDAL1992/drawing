#include <stdio.h>
#include "rectangle.h"
#include "horizon.h"

/*
	Function description:
	This function draws a rectangle with length of 30 character long
	which is the horiozontal line defined within the program
	and height of 14 character long.
	The length and height are made of asterisks and spaces.
	Argument: none
	Return: none
*/
void drawRectangle(void){
	drawHorizon(); // prints a horizontal line as one base
	printf("\n");
	int i, j; // counter variables
	for(i=0; i<7; i++){ // prints the height of 14 character long
		printf("*"); // prints the points of the left edge
		for(j=0; j<13; j++) printf("  "); // prints the spaces between left and right edges
		printf(" *\n"); // prints the points of the right edge
	}
	drawHorizon(); // prints a horizontal line as the other base
}
