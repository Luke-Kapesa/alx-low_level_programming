#include <stdio.h>
/**
  *main - Entry point
  *Description: 'all possible combinations of single digit numbers'
  *Return: always 0 (success)
  */
int main(void)
{
	int in;

	for (in = 0 ; in < 10 ; in++)
	{
		putchar(in + '0');
		if (in != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
