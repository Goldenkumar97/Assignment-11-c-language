//  Write a function to print first N prime numbers (TSRN).
#include <stdio.h>
void prime(int);
int main()
{
    int n;
    printf("enter a number = ");
    scanf("%d", &n);
    prime(n);
    return 0;
}
void prime(int x)
{
    int i, j, a = 0;
    for (i = 1; i <= i; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
            a++;
            if (a == x)
                break;
        }
    }
}