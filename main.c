#include <stdio.h>
#include <stdint.h>
#include "wordle.h"

int main() {
    int32_t issue = 0;
    printf("WORDLE ANSWER BOT - INPUT -1 TO TERMINATE THE PROGRAM\n\n");
    printf("Please enter the Wordle number (e.g. Wordle 226): ");
    scanf("%d", &issue);
    while(issue!=-1){
        printf("The answer of Wordle %d is: ", issue);
        wordle_answer(issue);
        printf("\n");
        printf("Please enter the Wordle number (e.g. Wordle 226): ");
        scanf("%d", &issue);
    }
    return 0;
}
