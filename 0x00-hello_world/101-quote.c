#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program outputs a specific quote to standard error (stderr)
 * using the write() system call. The quote includes the text "and that piece
 * of art is useful" attributed to Dora Korpar, 2015-10-19, followed by a
 * newline character. This demonstrates direct system call usage for output
 * redirection to stderr instead of stdout.
 *
 * Return: Always returns 1 (indicating non-standard termination)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
