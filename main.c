#include <stdio.h>
#include <stdlib.h>

#define CALC_POLY_DEGREE(polynomial)\
	(sizeof(polynomial)/sizeof(polynomial[0])-1)

int hornerP(int*, int, int);
	
int main(void)
{
	/*
		example:
		
		int poly[]={3,2,6,-2};
		P(x) = 3x^3 + 2x^2 + 6^1 -2 
	 */
	 
	int orderedPoly[]={3,2,6,-2};
	int degree=CALC_POLY_DEGREE(orderedPoly);
	
	int x = 2;
	
	printf("%d",hornerP(orderedPoly,degree,x));
	

return EXIT_SUCCESS;
}

int hornerP(int* poly, int degree, int x){
	int done = 0;
	for(size_t i=0; i<=degree; ++i)	
		done = done * x + poly[i]; 
	
	return done;	
}
