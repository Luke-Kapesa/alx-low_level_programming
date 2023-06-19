#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry point
  *Description: 'get the last digit of a number'
  *Return: always 0 (success)
  */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = (n % 10);
	if (ld > 5)
		printf("Last digit of %d is %i and is greater than 5\n", n, ld);
	else if (ld == 0)
		printf("Last digit of  %d is %i and is 0\n", n, ld);
	else
		printf("Last digit od %d is %i is less than 6 and is not 0\n", n, ld);
	return (0);
}
