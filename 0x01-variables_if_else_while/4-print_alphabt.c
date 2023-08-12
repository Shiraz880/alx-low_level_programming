#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabt letters except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
