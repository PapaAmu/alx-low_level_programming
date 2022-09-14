#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: n is an integer
 * Description: prints the last digit of a number
 * Return: integer
 */

int print_last_digits(int n)
{
	int digit_a;
	
	if (n < 0)
		n = -n;

	digit_a = n % 10;

	if (digit_a < 0)
		digit_a = -digit_a;

	_putchar(digit_a + '0');


	return (digit_a);
}
