#include <stdio.h>
#include "rectangle.h"
#include "horizon.h"

void drawRectangle(void){
	drawHorizon();
	printf("\n");
	int i, j;
	for(i=0; i<7; i++){
		printf("*");
		for(j=0; j<13; j++) printf("  ");
		printf(" *\n");
	}
	drawHorizon();
}
