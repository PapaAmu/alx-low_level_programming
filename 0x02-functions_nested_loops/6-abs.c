#include "main.h"

/**
 * _abs - Entry point
 * @n: n is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}
