#include <stdio.h>
#include <stdlib.h>

/**
 * main - return int
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
