#include <stdio.h>
#include "menu.h"
#include "triangle.h"
#include "rectangle.h"
#include "circle.h"
#include "square.h"
#include "horizon.h"
#include "intersect.h"

int main(void){
	int option;
	option = getOption();
	while(option != 7){
		if(option == 1)
			drawRectangle();
		else if(option == 2)
			drawSquare();
		else if(option == 3)
			drawCircle();
		else if(option == 4)
			drawTriangle();
		else if(option == 5){
			printf("\n\n\n");
			drawHorizon();
			printf("\n\n\n");
		}
		else if(option == 6)
			drawIntersect();
		else
			printf("\nInvalid selection.");
		printf("\n\n");
		option = getOption();
	}
	printf("Thank you for playing with us!\n");
	return 0;
}
