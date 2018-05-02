#include <stdio.h>
#include "triangle.h"
#include "horizon.h"

/*
	Function description:
	This function draws an isosceles triangle
	with base which is the horizontal line.
	Argument: none
	Return: none
*/
void drawTriangle(void){
	int i, j, k; // counter variables
	printf("              *\n"); // prints the vertex of the triangle
	for(i=0; i<13; i++){ // prints the 2 edges of the triangle
		for(j=13; j>i; j--) // prints the spaces before the left edge
			printf(" ");
		printf("*"); // prints the points of the left edge

		for(k=0; k<i; k++) // prints the spaces between the left and right edges
			printf("  ");
		printf(" *\n"); // prints the right edge
	}
	drawHorizon(); // prints a horizontal line as the base of the triangle
}
