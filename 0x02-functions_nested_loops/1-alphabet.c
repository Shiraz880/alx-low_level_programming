#include "main.h"

/**
 * print_alphabet - on _putcher function print alphabet
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
