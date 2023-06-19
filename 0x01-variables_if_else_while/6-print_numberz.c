#include <sdtio.h>
/**
  *main - Entry point
  *Description: 'single digit numbers of base 10 in a new line'
  *Return: always 0 (success)
  */
int main(void)
{
	int num;

	for (num = 0 ; num < 10 ; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
