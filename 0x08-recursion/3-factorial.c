#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @nmbr: The number to find the factorial of.
 *
 * Return: If nmbr > 0 - the factorial of n.
 *         If nmbr < 0 - 1 to indicate an error.
 */
int factorial(int nmbr)
{
	int result = nmbr;

	if (nmbr < 0)
		return (-1);

	else if (nmbr >= 0 && nmbr <= 1)
		return (1);

	result *= factorial(nmbr - 1);

	return (result);
}
