// You are given a numberN and find the sum of the first N odd and even numbers in a line separated by space.
// All even and odd numbers should be greater than 0.
#include <stdio.h>
int main()
{
    long int n, odd = 0, even = 0;
    scanf("%ld", &n);

    if (n == 0)
        return 0;

    long int count = 0, i = 1;
    while (count < n)
    {
        if (i % 2 == 0)
        {
            count++;
            even = even + i;
        }
        i++;
    }

    count = 0;
    i = 1;

    while (count < n)
    {
        if (i % 2 != 0)
        {
            count++;
            odd = odd + i;
        }

        i++;
    }

    printf("%ld %ld", odd, even);
    return 0;
}