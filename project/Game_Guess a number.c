#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, guessnumber = 1;
    ;
    srand(time(0));
    number = rand() % 100 + 1;
    do
    {
        printf("Enter a number \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Your number is bigger than the guess number\n");
        }
        else if (guess < number)
        {
            printf("Your number is less than the guess number\n");
        }

        else
        {
            printf("You found the number at %d attempt\n", guessnumber);
        }
        guessnumber++;
    } while (guess != number);

    return 0;
}