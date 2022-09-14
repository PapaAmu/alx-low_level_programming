#include "main.h"

/**
 * _islower - Entry point
 * Description: checks if a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true and 0 if false
 */
int _islower(int check_)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (check_ == i)
		{
			return (1);
		}
	}
	return (0);
}
