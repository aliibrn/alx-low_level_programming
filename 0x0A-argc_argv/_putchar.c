#include <unistd.h>

/**
 * _putchar - Outputs a single character to the standard output (stdout)
 * @c: The character to be printed
 *
 * Return: 1 on success,
 *         -1 on error and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
