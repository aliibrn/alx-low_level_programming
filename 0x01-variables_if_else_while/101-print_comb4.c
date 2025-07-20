#include <stdio.h>

/*
 * main - Entry point
 * Description: Prints all unique combinations of three digits
 * in ascending order, separated by a comma and a space.
 * Return: 0 if successful
 */
int main(void)
{
	int first, second, third;

	for (first = 48; first < 58; first++) /* Loop for the first digit */
	{
		for (second = 49; second < 58; second++) /* Loop for the second digit */
		{
			for (third = 50; third < 58; third++) /* Loop for the third digit */
			{
				/* Ensure the digits are in ascending order and unique */
				if (third > second && second > first)
				{
					putchar(first); /* Print the first digit */
					putchar(second); /* Print the second digit */
					putchar(third); /* Print the third digit */

					/* Add a comma and space except after the last combination */
					if (first != 55 || second != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n'); /* Print a newline at the end */
	return (0); /* Indicate successful execution */
}
