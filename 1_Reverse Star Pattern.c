/*You're given a number N. Print the first N lines of the below-given pattern.
 *
 **
 ***
 ****
 *****
 */
#include <stdio.h>
int main()
{
    int rows, i, j;
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {

        for (j = i; j < rows; j++)
        {
            printf(" ");
        }

        for (j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    return 0;
}
