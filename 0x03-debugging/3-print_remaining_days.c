#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month > 2) // For months after February in leap years
		{
			day++;
			}
		else if (month == 2 && day == 29) // For February 29 on leap years
		{
		printf("Day of the year: %d\n", 60);
		printf("Remaining days: %d\n", 366 - 60);
		return;
		}
	}

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", (year % 4 == 0) ? 366 - day : 365 - day);
}
