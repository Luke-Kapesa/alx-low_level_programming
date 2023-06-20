#include <stdio.h>
/**
  *main - Entry point
  *Description: 'all different combinations of two digits'
  *Return: always 0 (success)
  */
int main(void)
{
	int in;

	for (in = 0 ; in < 10 ; in++)
	{
		int in1 = in + 1;

		for (; in1 < 10 ; in1++)
		{
			putchar(in + '0');
			putchar(in1 + '0');
			if (in != 8 || in1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
