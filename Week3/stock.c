#include <stdio.h>
#include <math.h>
#include "calc.h"


int main()
{
    int p = 1000000;
    double r = 0.1;
    int n = 12;
    int t = 40;

    double a = stock(p, r, n, t);
    printf("미래가치 : %f\n", a);
    return 0;
}