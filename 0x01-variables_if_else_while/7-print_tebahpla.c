#include <stdio.h>

/**
 * main - Entry point
 *
 * description: print a-z in reverse
 *
 * Return: always 0
 */

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}
