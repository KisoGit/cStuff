#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
/    My calculator :)
*/
int main(void) {

    double num1;
    double num2;
    double solution;
    char op = "+";

    printf("Enter first number: ");
    scanf("%lf", &num1);
    printf("Enter an operator: ");
    scanf(" %c", &op);
    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch(op){
        case '+' :
            solution = num1 + num2;
            break;
        case '-' :
            solution = num1 - num2;
            break;
        case '*' :
            solution = num1 * num2;
            break; 
        case '/' :
            solution = num1 / num2;
            break;
        default:
            printf("Thats not a valid operator!");
            return 0;
    }
    printf("Answer: %f\n", solution);
    return 0;
}