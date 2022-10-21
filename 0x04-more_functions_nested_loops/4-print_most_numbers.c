#include "main.h"

/**
 * more_numbers - nmbr fct
 * Jaykon ICT file
 * Return: no return
 */

void print_more_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (!(c == '2' || c == '4'))
			_putchar(c);
	}
	_putchar('\n');
}
