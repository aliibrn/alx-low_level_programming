#include <stdio.h>

/**
 * main - displays hexadecimal digits 0-9 and a-f in lowercase,
 * ending with a newline character
 * Return: 0 on success
 */
int main(void)
{
	int digit;
	char letter;

	/* Print numeric digits 0-9 */
	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
	}
	/* Print alphabetic digits a-f */
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
