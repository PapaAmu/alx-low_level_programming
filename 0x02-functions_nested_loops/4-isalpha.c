#include "main.h"

/*
 * _isalpha -Entry point
 * @check: the integer value it receives
 * Description: checks if alphabet
 * Return: 1 if true, otherwise 0
 */

int _isalpha(int check)
{
	if (check >= 'a' && check <= 'z')
	{
		return (1);
	}
	elif (check >= 'A' && check <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
