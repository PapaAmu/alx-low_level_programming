#include "main.h"

/**
* print_line -> printing line
* @line_index: integer params
*/
void print_line(int line_index)
{
	int x_value;

	if (line_index <= 0)
		_putchar('\n');
	else
	{
		for (x_value = 0; x_value < line_index; x_value++)
			_putchar(95);
		_putchar('\n');
	}
}
