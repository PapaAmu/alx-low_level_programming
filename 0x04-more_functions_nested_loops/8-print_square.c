#include "main.h"

/**
 * print_square: checks for a digit
 * @n: number of # to be printed
 * Return: void
 */

void print_square(int n)
{
	int i = 0, sq;

	while (i < n && n > 0)
	{
		sq = 0;
		while ( sq < n)
		{
			_putchar('#');
			sq++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
