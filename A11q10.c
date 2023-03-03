#include <stdio.h>
int res(int n);
int add(int n);
int main()
{
    int x = 5;
    res(x);
    printf("Sum is = %d",add(x));
    return 0;
}
int add(int n)
{
    int z=0;
    while (n)
    {
        z=z+res(n) / n;
        n--;
    }
    return z;
}
int res(int n)
{
    int a = 1;
    while (n)
    {
        a = a * n;
        n--;
    }
}