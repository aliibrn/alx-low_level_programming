#include <stdio.h>

/**
 * main - Entry point that prints lowercase alphabet in reverse order
 * 
 * Description: This function prints all lowercase letters from z to a
 * followed by a newline character
 * 
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
