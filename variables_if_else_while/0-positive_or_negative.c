#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int n;

    // Initialize random number generator
    srand(time(0));

    // Generate a random number and assign it to n
    n = rand() - RAND_MAX / 2;

    // Print the number
    printf("%d is ", n);

    // Check whether the number is positive, negative, or zero
    if (n > 0)
    {
        printf("positive\n");
    }
    else if (n == 0)
    {
        printf("zero\n");
    }
    else
    {
        printf("negative\n");
    }

    return 0;
}

