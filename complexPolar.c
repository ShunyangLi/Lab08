// COMP1511 17s2 -- Complex ADT
// Created by: ... (z0000000)
//             ... (z0000000)
// Created on: 2017-09-??
// Tutorial:   dayHH-lab

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

typedef struct _complex *Complex;
typedef struct _complex {
    double mod;
    double arg;
} complex;

Complex newComplexModArg (double mod, double arg) {
	Complex new = calloc(1,sizeof(complex));
	new -> mod = mod;
	new -> arg = arg;
	return new;
}

void destroyComplex (Complex c) {
    // Add your code here.
    free(c);
}

Complex complexExp (Complex z, double x) {
	Complex value = calloc(1,sizeof(complex));
	value -> mod = pow(z -> mod, x);
	value -> arg = pow(z -> arg, x);
	return value;
}

int main(int argc, char *argv[]) {
	Complex new = newComplexModArg(1.1,2.1);
	printf("%lf + %lf\n", new -> mod, new -> arg);
	
	Complex exp = complexExp(new,2);
	printf("%lf\n%lf\n", exp -> arg, exp -> mod);
	
	destroyComplex(new);
	destroyComplex(exp);
	
	return 0;
}
