#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main function to generate random number
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is possible\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0 )
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
