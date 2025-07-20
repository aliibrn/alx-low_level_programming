#include <stdio.h>

/**
 * main - Entry point, prints all unique combinations of two digits
 * Return: 0 if the program executes successfully
 */
int main(void)
{
	int n, m;

	for (n = 48; n <= 56; n++) // Loop through the first digit
	{
		for (m = 49; m <= 57; m++) // Loop through the second digit
		{
			if (m > n) // Ensure the second digit is greater than the first
			{
				putchar(n); // Print the first digit
				putchar(m); // Print the second digit
				if (n != 56 || m != 57) // Check if it's the last combination
				{
					putchar(','); // Print a comma
					putchar(' '); // Print a space
				}
			}
		}
	}
	putchar('\n'); // Print a newline at the end
	return (0); // Indicate successful execution
}
