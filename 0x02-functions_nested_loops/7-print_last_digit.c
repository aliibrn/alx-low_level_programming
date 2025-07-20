#include "main.h"

/**
 * print_last_digit - Function to retrieve and print the last digit of a number
 * @n: The integer input to process
 * 
 * Return: The last digit of the input number
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
