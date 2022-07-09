// You're giventhe lengthof three sides a, b, and c respectively. Now check if these three sides can form
// a triangle or not. Print "YES"(without quotes) if it can form a valid triangle with an area greater than 0,
// otherwise print "NO" (without quotes).
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c && (c + a) > b && (b + c) > a)
    {

        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}