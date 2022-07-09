// You're given a number N. Print the first N lines of the below-given pattern.
#include <stdio.h>
int main()
{
    int n, k = 1, f = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0 && i != 1)
            f = f + 5;

        if (i % 2 != 0)
        {
            for (k = 1; k <= 5; k++)
            {
                printf("%d ", f);
                f++;
            }
            printf("\n");
        }
        

        if (i % 2 == 0)
        {
            f = f + 4;
            for (k = 1; k <= 5; k++)
            {

                printf("%d ", f);
                f--;
            }
            f++;
            printf("\n");
        }
    }
    return 0;
}