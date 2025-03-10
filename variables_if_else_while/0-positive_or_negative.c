#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of the program
 *
 * Description: This program assigns a random number to the variable n
 * each time it runs and prints whether the number is positive, negative,
 * or zero.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0)); /* Seed the random number generator */


/* Check if n is positive, zero, or negative and print result */
n = rand() - RAND_MAX / 2;

printf("%d is ", n);

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

return (0);
}
