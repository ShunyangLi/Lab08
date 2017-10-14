// COMP1511 17s2 -- Complex ADT
// Created by: ... (z0000000)
//             ... (z0000000)
// Created on: 2017-09-??
// Tutorial:   dayHH-lab

#include <assert.h>
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
	Complex new1 = newComplex(3.2,4.2);
	double re0 = complexRe(new);
	double im0 = complexIm(new);
	double re1 = complexRe(new1);
	double im1 = complexIm(new1);

	assert(new -> re = re0);
	assert(new -> im = im0);
	assert(new1 -> re = re1);
	assert(new1 -> im = im1);
	
	Complex sum = complexAdd(new,new1);
	assert(sum -> re = re0 + re1);
	assert(sum -> im = im0 + im1);
	
	Complex multiple = complexMultiply(new,new1);
	assert(multiple -> re = re0 * re1 - im0 * im1);
	assert(multiple -> im = re0 * im1 + im0 * re1);
	
	double Mod = complexMod(new);
	assert(Mod = re0 * re0 + im0 * im0);

	double Mod1 = complexMod(new1);
	assert(Mod1 = re1 * re1 + im1 * im1);
	
	double Degree = complexArg(new);
	double test = atan2(im0, re0);
	assert(Degree = test);
	
	
}
