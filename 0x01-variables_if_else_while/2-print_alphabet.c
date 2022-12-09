#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function to write alphabets in lower case
 *
 * Return: Alwways 0 (success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
