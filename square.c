#include <stdio.h>
#include "square.h"
#include "horizon.h"

/*
	Function description:
	This functions draws a square with 4 edges of 30 character long,
	each made up from asterisks and spaces.
	Argument: none
	Return: none
*/
void drawSquare(void){
	drawHorizon(); // prints a horizontal line as the upper edge
	printf("\n");
	int i, j; // counter variables
	for(i=0; i<13; i++){ // prints the height
		printf("*"); // prints the points of the left edge
		for(j=0; j<13; j++) printf("  "); // prints the spaces between left and right edges
		printf(" *\n"); // prints the right edge
	}
	drawHorizon(); // prints a horizontal line as the lower edge
}
