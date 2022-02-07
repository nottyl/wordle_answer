#include <stdio.h>
#include <stdint.h>
#include "wordle.h"

int main() {
    int32_t issue;
    printf("Please enter the Wordle number (e.g. Wordle 226): ");
    scanf("%d", &issue);
    printf("The answer of Wordle %d is: ", issue);
    wordle_answer(issue);
    return 0;
}
