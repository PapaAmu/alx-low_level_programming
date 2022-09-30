#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse.
 * @Rev: The string to be printed.
 */
void _print_rev_recursion(char *Rev)
{
	if (*Rev)
	{
		_print_rev_recursion(Rev + 1);
		_putchar(*Rev);
	}
}
