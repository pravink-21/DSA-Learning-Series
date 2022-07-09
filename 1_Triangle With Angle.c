// You're given the three angles a, b, and c respectively. Now check if these three angles can form a valid triangle with an area
// greater than 0 or not. Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0, otherwise print "NO" (without quotes).
#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a + b + c == 180 && a < 179 && b < 179 && c < 179 && a > 0 && b > 0 && c > 0)
    {
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}
