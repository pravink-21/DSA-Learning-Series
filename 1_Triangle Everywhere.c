// You're given the length of three sides a, b, and c respectively. Now If these three sides can form an Equilateral Triangle then print 1, if these three sides can form an Isosceles Triangle then print 2, 
// if these three sides can form a Scalene Triangle then print 3, otherwise print −1.
#include <stdio.h>
int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (!((a + b) > c && (c + a) > b && (b + c) > a))//not a triangle ka case
        printf("-1");
    else if (a == b && b == c)//equilateral triangle
        printf("1");
    else if ((a == b || b == c || c == a) && !(a == b == c))//Isosceles Triangle
        printf("2");
    else if (!(a == b == c))//Scalene Triangle
        printf("3");

    return 0;
}
