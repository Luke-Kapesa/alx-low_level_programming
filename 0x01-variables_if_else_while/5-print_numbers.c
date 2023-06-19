#include <stdio.h>
/**
  *main - Entry point
  *Description: 'single digit numbers of base 10'
  *Retturn: always 0 (success)
  */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		printf("%d", num);
	}
	putchar('\n');
	return (0);
}
