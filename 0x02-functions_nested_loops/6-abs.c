#include "main.h"

/**
 * _abs - function that computes the absoloute value of integar
 *
 * @n: take an integar type input for function
 *
 * Return: always 0
 */

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
