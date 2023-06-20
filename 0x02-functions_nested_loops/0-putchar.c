#include <stdio.h>
#include "main.h"
/**
  *main - Entry point
  *Description: 'prints _putchar'
  *Return: always 0 (success)
  */
int main(void)
{
	char c1[8] = "_putchar";
	int cpos;

	for (cpos = 0 ; cpos <= 7 ; cpos++)
	{
		_putchar(c1[cpos]);
	}
	_putchar('\n');
	return (0);
}
