#include <stdio.h>

/**
* main - Entry point
*
* Description: Prints all the numbers of base 16 in lowercase,
* followed by a new line.
*
* Return: Always 0 (Success)
*/
int main(void)
{
char hex= '0';

while (hex <= '9')
{
putchar(hex);
hex++;

}
hex = 'a';
while (hex <= 'f')
{
putchar(hex);
	hex++;
}
putchar('\n');

return (0);
}
