// Given an integer N write a program to reverse it.
#include <stdio.h>
#include <math.h>
int main()
{
    int n, t;
    int remainder = 0, rev = 0, k, count = 0;
    scanf("%d", &t);
    while (t > 0)
    {
        t--;
        scanf("%d ", &n);
        k = n;
        while (k > 0)
        {
            k = k / 10;
            count++;
        }
        while (n > 0)
        {
            remainder = n % 10;
            rev = rev + pow(remainder, count--);
            n = n / 10;
        }
        printf("%d", rev);
    }
    return 0;
}