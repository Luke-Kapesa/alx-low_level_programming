#include <stdio.h>
/**
  *main - Entry point
  *Description: 'all base 16 numbers in lowercase'
  *Return: always 0 (success)
  */
int main(void)
{
	int c1;
	int lt;

	for (c1 = 0 ; c1 < 10 ; c1++)
	{
		putchar(c1 + '0');
	}

	for (lt = 'a' ; lt < 'f' ; lt++)
	{
		putchar(lt);
	}
	putchar('\n');
	return (0);
}
