#include <stdio.h>
#include <stdlib.h>

#include <time.h>
int main() {  
    int secret_number;
    int guess = 0;
    int attempts = 0;



    srand(time(0));

    secret_number = rand() % 100 + 1;

    printf("=== Welcome to the Guessing Game! ===\n");
    printf("I have chosen a number between 1 and 100.\n");
    printf("Can you guess it?\n\n");


    while ( guess != secret_number) { 
    printf("Enter your guess: ");
    scanf("%d", &guess);
    attempts++;

    if (guess > secret_number) {
        printf("Too high! Try again.\n");
    }
    else if (guess < secret_number) {
        printf("Too low! Try again.\n");
    }
    else {
        printf("\nCongratulations!You guessed it in %d attempts!\n" ,attempts);
    }
}

  return 0;
      
}