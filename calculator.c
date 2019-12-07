#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
    My calculator :)
*/
int main(void) {

    double num1;
    double num2;

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Answer: %f\n", num1 + num2);    //remember to use %f for print() but %lf for scanf()

    return 0;
}