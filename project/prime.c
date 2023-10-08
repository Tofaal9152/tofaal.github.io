#include <stdio.h>

int main()
{
    int number, sum;
    printf("Enter a number\n");
    scanf("%d", &number);
    for (int i = 2; i < number; i++)
    {
        sum = number % i;
        if (sum == 0)
        {
            printf("Not Prime");
            break;
        }
    }
    if (sum != 0)
    {
        printf("Prime");
    }
}