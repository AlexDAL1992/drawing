#include <stdio.h>
#include "intersect.h"

void drawIntersect(void){
	int i, j, k;
	for(i=0; i<7; i++){
		for(j=0; j<i; j++)
			printf("  ");
		printf("*");
		for(k=12; k>=i*2; k--)
			printf("  ");
		printf(" *\n");
	}
	printf("              *\n");
	for(i=7; i>0; i--){
		for(j=i-1; j>0; j--)
			printf("  ");
		printf("*");
		for(k=0; k<=(7-i)*2; k++)
			printf("  ");
		printf(" *\n");
	}
}
