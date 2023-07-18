#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int limit = 4000000;
	long int num1 = 1;
	long int num2 = 2;
	long int fib;
	long int sum = 2;  // Start with the sum as 2 (accounting for the second term)

	while (num1 + num2 <= limit)
	{
		fib = num1 + num2;

		if (fib % 2 == 0)
		{
			sum += fib;
		}

		num1 = num2;
		num2 = fib;
	}

	printf("%ld\n", sum);

	return (0);
}
