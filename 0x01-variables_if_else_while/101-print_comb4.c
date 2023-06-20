#include <stdio.h>
/**
  *main - Entry point
  *Description: 'possible combinations of three digits'
  *Return: always 0 (success)
  */
int main(void)
{
	int d1;
	int d2;
	int d3;

	for (d1 = 0 ; d1 < 10 ; d1++)
	{
		d2 = d1 + 1;
		for (; d2 < 10 ; d2++)
		{
			d3 = d2 + 1;

			for (; d3 < 10 ; d3++)
			{
				putchar(d1 + '0');
				putchar(d2 + '0');
				putchar(d3 + '0');

				if (d1 != 7 || d2 != 8 || d3 != 9)
				{
					putchar(',');
					putchar(' ');
				}

			}

		}

	}
	putchar('\n');
	return (0);
}
