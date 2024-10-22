#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_WORDS 5
#define MAX_LENGTH 20

const char *words[MAX_WORDS] = {"c_t", "p_ogram", "g_me", "le_arn", "l_tter"};
const char *answers[MAX_WORDS] = {"cat", "program", "game", "learn", "letter"};

void displayInstructions() {
    printf("Welcome to the Missing Letters Game!\n");
    printf("Fill in the missing letters in the words.\n");
}

int main() {
    srand(time(0));
    int score = 0;
    int rounds = 3;

    displayInstructions();

    for (int i = 0; i < rounds; i++) {
        int index = rand() % MAX_WORDS;
        char guess[MAX_LENGTH];

        printf("\nWord: %s\n", words[index]);
        printf("Your guess: ");
        scanf("%s", guess);

        if (strcmp(guess, answers[index]) == 0) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Incorrect. The correct answer is %s.\n", answers[index]);
        }
    }

    printf("\nGame Over! Your score: %d/%d\n", score, rounds);
    return 0;
}