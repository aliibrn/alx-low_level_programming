#include <stdio.h>

/**
 * main - Prints the program's name.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Ignore unused parameter warning */
	printf("%s\n", argv[0]); /* Print the program's name */
	return (0); /* Indicate successful completion */
}
