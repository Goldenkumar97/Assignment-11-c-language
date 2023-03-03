/* Write a finction to check whether a given number is prime or not (TSRS)*/
#include"stdio.h"
int prime(int a );
int main()
{
    int s,x;
    printf("Enter number ");
    scanf("%d",&x);
    s=prime(x);
  return 0;
}
int prime(int n )
{
    int i, count = 0,flag =0;         
    for(i = 2; i < n; i++) 
    {
        if(n % i == 0)
            count++;
    }
     if(count == 0)          
    {
        printf("%d is a prime number.", n);
    }
   else
    {
        printf("%d is not a prime number.", n);
    }
    return n;
}