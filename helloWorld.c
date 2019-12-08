#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
/    My first c program :)
*/
int main(void) {

    char str1[20] = "Hi, what is your name?\n";
    int age = 22;
    double gpa = 3.7;
    const int PI_NUM = 3.14;            //constant int
    char str2[20];


    printf(str1);
    scanf("%s", str2);                  //for other types &name. fgets(name, limitOfCharacters, stdin) to take a whole line of text.
    printf("Your name is %s.\n", str2);
    

    printf("%f", pow(2, 3));            //2^3
    printf("%f", sqrt(4));              //square root
    printf("%f", ceil(4.3456));         //rounds up
    printf("%f\n", floor(4.3456));      //rounds down

    return 0;
}
