#include <stdio.h>
/**
  *main - Entry point
  *Description: 'lowercase alphabet in reverse'
  *Return: always 0 (success)
  */
int main(void)
{
	int c1;

	for (c1 = 'z' ; c1 >= 'a' ; c1--)
	{
		putchar(c1);
	}
	putchar('\n');
	return (0);
}
