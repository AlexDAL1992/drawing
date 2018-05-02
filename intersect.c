#include <stdio.h>
#include "intersect.h"

/*
	Function description:
	This function draws two diagonally intersecting lines,
	made from asterisks and spaces.
	Argument: none
	Return: none
*/
void drawIntersect(void){
	int i, j, k; // counter definitions
	for(i=0; i<7; i++){ // draws the upper half of the intersecting pair of lines
		for(j=0; j<i; j++) // prints the spaces before the first line
			printf("  ");
		printf("*"); // prints the points of the first line
		for(k=12; k>=i*2; k--) // prints the spaces between 2 lines
			printf("  ");
		printf(" *\n"); // prints the points of the second line
	}
	printf("              *\n"); // draws the intersecting point of 2 lines
	for(i=7; i>0; i--){ // draws the lower half of the intersecting pair of lines
		for(j=i-1; j>0; j--) // prints the spaces before the first line
			printf("  ");
		printf("*"); // prints the points of the first line
		for(k=0; k<=(7-i)*2; k++) // prints the spaces between 2 lines
			printf("  ");
		printf(" *\n"); // prints the points of the second line
	}
}
