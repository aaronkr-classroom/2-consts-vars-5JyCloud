// calc.c
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h> 

int Sum(int a, int b)
{
    return a + b;
}
int Sub(int a, int b)
{
    return a - b;
}
int Mul(int a, int b)
{
    return a * b;
}
int Div(int a, int b)
{
    if(b == 0)
    {
        printf("Error : Divide by 0\n");
        return 0;
    }
    return a / b;
}
double stock(int p, double r, int n, int t)
{
    double a = pow(p * (1 + r / n), (n * t));
    return a;
}

double circ_area(double r) {return M_PI * r * r;}   // 넓이
double circ_circ(double r) {return 2 * M_PI * r;}  // 둘레