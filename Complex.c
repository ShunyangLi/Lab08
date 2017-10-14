// COMP1511 17s2 -- Complex ADT
// Created by: ... (z0000000)
//             ... (z0000000)
// Created on: 2017-09-??
// Tutorial:   dayHH-lab

#include <assert.h>
#include <stdlib.h>
#include <math.h>

#include "Complex.h"

typedef struct _complex {
    double re;
    double im;
} complex;

// Create a new `Complex` number from two `double`s.
Complex newComplex (double re, double im) {
    // Add your code here.
    Complex new = calloc(1,sizeof(complex));
    new -> re = re;
    new -> im = im;
    return new;
}

// Release all resources associated with a `Complex` number.
void destroyComplex (Complex c) {
    // Add your code here.
    free(c);
}

// Retrieve the real part of the `Complex` number.
double complexRe (Complex c) {
    // Add your code here.
    
    return c -> re;
}

// Retrieve the imaginary part of the `Complex` number.
double complexIm (Complex c) {
    // Add your code here.
    
    return c -> im;
}

// Add two `Complex` numbers together.
Complex complexAdd (Complex w, Complex z) {
    // Add your code here.
    Complex sum = calloc(1,sizeof(complex));
    
    sum -> re = w -> re + z -> re;
    sum -> im = w -> im + z -> im;
    return sum;
}

// Multiply two `Complex` numbers together.
Complex complexMultiply (Complex w, Complex z) {
    // Add your code here.
    
    Complex value = calloc(1,sizeof(complex));
    
    value -> re = w -> re * z -> re - w -> im * z -> im;
    value -> im = w -> re * z -> im + w -> im * z ->re;
    
    return value;
}

// Take the magnitude (or modulus, or absolute) of a `Complex` number.
double complexMod (Complex w) {
    // Add your code here.
    
    double value = sqrt(w -> re * w -> re + w -> im * w -> im);
    return value;
}

// Take the argument (or angle) of a `Complex` number.
double complexArg (Complex w) {
    // Add your code here.
    
    double angle = atan2(w -> im, w -> re);
    return angle;
}
