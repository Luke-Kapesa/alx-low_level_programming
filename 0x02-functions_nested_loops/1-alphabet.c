#include <stdio.h>
#include "main.h"
/**
  *print_alphabet - Entry point
  *Description: 'alphabet in lowercase'
  *Return: always 0 (success)
  */
void print_alphabet(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
		_putchar(al);
	_putchar('\n');
}
