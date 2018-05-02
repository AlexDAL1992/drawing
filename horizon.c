#include <stdio.h>
#include "horizon.h"

/*
	Function description:
	This functions draws a horizontal line
	whose length is 30 character long,
	made of asterisks and spaces.
	Argument: none
	Return: none
*/
void drawHorizon(void){
	int i;
	for(i=0; i<15; i++) // prints 15 times of "* " characters
		printf("* ");
}
