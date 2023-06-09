#include "main.h"

/**
 * print_square - print a square using the character #
 *
 * @n: number of _ to be printed
 *
 * Return: Always 0 (Success)
*/

void print_square(int n)
{
	int i = 0, ii;

	while (i < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
		_putchar('\n');
}
