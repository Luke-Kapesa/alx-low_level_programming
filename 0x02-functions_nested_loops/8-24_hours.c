#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - function that prints every minute of the day of Jack Bauer
 * Return: void data type
 */

void jack_bauer(void)
{
	int hr = 0;
	int min = 0;

	while (hr < 24)
	{
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		min = 0;
		hr++;
	}
}
