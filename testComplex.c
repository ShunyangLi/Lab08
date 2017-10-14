#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Complex.h"

typedef struct _complex {
    double re;
    double im;
} complex;

int main(int argc, char *argv[]) {
	
	Complex new = newComplex(1.2,2.2);
	Complex new1 = newComplex(1.2,2.2);
	printf("The real part: %lf\n",new -> re);
	printf("The im part: %lf\n",new -> im);
	printf("The real part: %lf\n",new1 -> re);
	printf("The im part: %lf\n",new1 -> im);
	
	double re = complexRe(new);
	double im = complexIm(new);
	printf("The real part of new: %lf\n",re);
	printf("The im part of new: %lf\n",im);
	
	Complex sum = complexAdd(new,new1);
	Complex value = complexMultiply(new,new1);
	printf("The sum of real part: %lf\n",sum -> re);
	printf("The sum of im part: %lf\n",sum -> im);
	
	double mod = complexMod(new);
	double arg = complexArg(new);
}
