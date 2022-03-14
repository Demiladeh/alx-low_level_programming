#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* Betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Description: prints if the string is greater than 5 or less than 6 or equal to zero
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", last_digit);
	} else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_digit);
	} else 
	{
		printf("Last digit of %d is %d and is less than 6 and ", n, last_digit);
		printf("not 0\n");
	}
	return (0);
}
