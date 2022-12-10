#include <stdio.h>
#include <stdlib.h>
/**
 * main - return A-z
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch = 'a';
	int cz = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (cz <= 'Z')
	{
		putchar(cz);
		cz++;
	}

	putchar('\n');
	return (0);
}
