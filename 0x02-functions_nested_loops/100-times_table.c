#include <stdio.h>
/**
 * print_times_table - Prints the n times table
 * @n: The number for which the times table should be printed
 */
void print_times_table(int n)
{
    if (n < 0 || n > 15)
        return;

    int i, j, prod;

    for (i = 0; i <= n; ++i)
    {
        for (j = 0; j <= n; ++j)
        {
            prod = i * j;
            printf("%d", prod);

            if (j < n)
                printf("\t");
        }

        printf("\n");
    }
}
