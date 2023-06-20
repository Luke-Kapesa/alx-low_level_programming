#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: void type
 */

void print_alphabet_x10(void)
{
	int alcount = 0;

	for (; alcount < 10; alcount++)
	{
		char al = 'a';

		for (; al <= 'z'; al++)
		_putchar(al);

		_putchar('\n');
	}
}
