#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @len_th: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *len_th)
{
	int len = 0;

	if (*len_th)
	{
		len++;
		len += _strlen_recursion(len_th + 1);
	}

	return (len);
}
