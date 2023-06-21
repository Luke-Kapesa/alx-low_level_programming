#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @num: ASCII character
 * Return: int data type
 */
int print_last_digit(int num)
{
	int a;

	if (num < 0)
	{
		num = -num;

		a = num % 10;
	}
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}
