#include <stdio.h>
#include <math.h>
#include "calc.h"


int main()
{
    int p = 1000000;
    double r = 10;
    int n = 12;
    int t = 40;

    double a = stock(p, r, n, t);
    printf("%f", a);
    return 0;
}