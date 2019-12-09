#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
/    My take on a tournament matchmaker.
*/
int main(void) {

    struct game game;

    printf("How many people participate?");
    scanf("%lf", &game.numberOfParticipants);

    for(int i = 0; game.numberOfParticipants < i; i++){
            printf("Please enter the name of the %d. participant!", game.numberOfParticipants);
            scanf("%s", &game.names[i]);
    }

    for(int i = 0; game.numberOfParticipants < i; i =+ 2){
        printf("First game is between %s and %s", game.names[i], game.names[i+1]);
    }

    return 0;
}

struct game{
    int numberOfParticipants;
    char names[20];
    char winners[20];
    char losers[20];
};

void assembleGame() {

}