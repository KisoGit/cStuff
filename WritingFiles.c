#include <stdio.h>
#include <stdlib.h>

int main() {

    char line[255];

    FILE *fpointer = fopen("exampleFile.txt", "w"); //"w" for "write". Care! Overrides the file. "f" to append. "r" to read.

    fprintf(fpointer, "Hello World! \nSecond Line \nThird Line\n");

    fclose(fpointer);


    FILE *ffpointer = fopen("exampleFile.txt", "r");
    
    fgets(line, 255, ffpointer);                    //read first line of the FILE ffpointer points to and increments the pointer.
                                                    //arguments: where to store(char line), what size to read in (255), which filepointer?
    printf("%s", line);

    fgets(line, 255, ffpointer);                    //incremented pointer reads the next line of ffpointer FILE.
    printf("%s", line);
    fclose(ffpointer);


    return 0;
}