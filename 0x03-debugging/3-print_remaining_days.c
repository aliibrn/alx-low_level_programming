#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Calculates and prints the day of the year
 * and the remaining days in the year, accounting for leap years.
 * @month: Month in numeric format (1-12)
 * @day: Day of the month
 * @year: Year in YYYY format
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) // Check for leap year
	{
		if (month > 2) // Adjust day count for leap year after February
		{
			day++;
		}
		printf("Day of the year: %d\n", day);
		printf("Remaining days: %d\n", 366 - day); // Leap year has 366 days
	}
	else
	{
		if (month == 2 && day == 60) // Handle invalid leap day for non-leap years
		{
			printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
		}
		else
		{
			printf("Day of the year: %d\n", day);
			printf("Remaining days: %d\n", 365 - day); // Non-leap year has 365 days
		}
	}
}
