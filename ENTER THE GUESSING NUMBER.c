//The code is about a game,which a computer generates a random number defaulty we have to guess it by entering a proper number.If our entering number is greater than target number then it produces a output as too high,if it is less then produce the output as too low.
//If it is correct number then tells that it is the correct number and you find it in n number of attempts.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int target, guess, attempts = 0;
    srand(time(0));  // Seed the random number generator

    target = rand() % 100 + 1;  // Random number between 1 and 100

    printf("Welcome to the Number Guessing Game!\n");
    printf("Guess the number between 1 and 100\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > target) {
            printf("Too high! Try again.\n");
        } else if (guess < target) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
        }
    } while (guess != target);

    return 0;
}
