#include <stdio.h>
#include "square.h"
#include "horizon.h"

void drawSquare(void){
	drawHorizon();
	printf("\n");
	int i, j;
	for(i=0; i<13; i++){
		printf("*");
		for(j=0; j<13; j++) printf("  ");
		printf(" *\n");
	}
	drawHorizon();
}
