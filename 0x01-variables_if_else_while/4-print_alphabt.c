#include <stdio.h>
/**
  *main - Entry point
  *Description: 'alphabet in lwercase except for q and e'
  *Return: always 0 (success)
  */
int main(void)
{
	char c1 = 'a';

	for (c1 = 'a'; c1 <= 'z' ; c1++)
	{
		if (c1 == 'q' || c1 == 'e')
			continue;
		putchar(c1);
	}
	putchar('\n');
	return (0);
}
