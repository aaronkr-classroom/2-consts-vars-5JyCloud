// calc_main.c
#include <stdio.h>
#include "calc.h"

int main()
{
    int a = 4, b = 5;
    
    printf("더하기 결과는 : %d\n", Sum(a, b));
    printf("빼기 결과는 : %d\n", Sub(a, b));
    printf("곱하기 결과는 : %d\n", Mul(a, b));
    printf("나누기 결과는 : %d\n", Div(a, b));

    printf("반지름 r인 원의 넓이는 : %.3f\n", circ_area(a));
    printf("반지름 r인 원의 둘레는 : %.3f\n", circ_circ(a));

    return 0;
}