#include <stdio.h>
#include "triangle.h"
#include "horizon.h"

void drawTriangle(void){
	int i, j, k;
	printf("              *             \n");
	for(i=0; i<13; i++){
		for(j=13; j>i; j--)
			printf(" ");
		printf("*");

		for(k=0; k<i; k++)
			printf("  ");
		printf(" *\n");
	}
	drawHorizon();
}
