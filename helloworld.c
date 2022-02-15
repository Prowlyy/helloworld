#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    int randomNumber = 0;
    int guess = 0;
    int numberOfGuesses;
    time_t t;

    // Initialization of random number generator
    srand((unsigned) time(&t));

    // get the random number
    randomNumber = rand() % 21;
    printf("\n> Hello!\n> This is a guessing game.\n> I have chosen a number between 0 and 20 which you must guess!");


    for(numberOfGuesses = 5; numberOfGuesses > 0; --numberOfGuesses)
    {
        printf("You have %d guesses more!\n", numberOfGuesses);
        printf("Enter your guess:\n");
        scanf(" %d", &guess);

        if(guess == randomNumber)
        {
            printf("\nCongratulations. You guessed it!\n");
            break;
        }
        else if(guess < 0 || guess > 20) //checking for invalid guess
        {
            printf("\nThe number is between 0 and 20\n");
            ++numberOfGuesses;
        }
        else if(guess < randomNumber)
            printf("Sorry, %d is wrong. My number is greater than that.\n", guess);
        else if(guess > randomNumber)
            printf("Sorry, %d is wrong. My number is less than that.\n", guess);
    }

    printf("You've run out of guesses!\n");
    printf("The number was %d!\n", randomNumber);

return 0;
}

