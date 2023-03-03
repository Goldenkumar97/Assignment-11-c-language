/* Write a function to find the next prime number of a given number.(TSRS)*/
#include <stdio.h>
int prime(int x);
int main()
{
    int n,s;
    printf("enter a number = ");
    scanf("%d", &n);
    s=prime(n);
    printf("Next prime number is = %d", s);
    return 0;
}
int prime(int x)
{
    int i, j;
    for (i = x + 1; i < i + 1; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
            return i;
    }
}