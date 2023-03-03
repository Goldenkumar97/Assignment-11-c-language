//Write a function to print all prime number between given two numbers.(TSRN)
#include"stdio.h"
void prime(int a , int b);
int main()
{
    int a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&a,&b);
    prime(a,b);
    return 0;
}
void prime(int a , int b)
{
    int i,j,count=0;    
    for(i=a;i<=b;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if( i%j==0)
            count++;
        }
        if(count==2)
        printf(" %d ",i);
    }
   
}






