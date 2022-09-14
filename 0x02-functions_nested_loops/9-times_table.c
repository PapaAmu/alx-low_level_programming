#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0
 */

void times_table(void)
{
	int num, mltply, rslt;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mltply = 1; mltply <= 9; mltply++)
		{
			_putchar(',');
			_putchar(' ');
			rslt = num * mltply;

			if (rslt <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((rslt / 10) + '0');
				_putchar((rslt % 10) + '0');
			}
			_putchar('\n');
		}
	}
}


