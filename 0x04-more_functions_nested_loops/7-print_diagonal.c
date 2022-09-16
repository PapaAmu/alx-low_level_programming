#include "main.h"

/**
 * print_diagonal - diagonal lines made of backslashes
 * @n: number of \ to be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i = 0, diag;

	while (i < n && n > 0)
	{
		diag = 0;
		while (diag < i)
		{
			_putchar(' ');
			diag++;
		}

		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
