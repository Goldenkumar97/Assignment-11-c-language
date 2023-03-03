/* Write a function to calculate hcf of two numbers (TSRS)*/
#include"stdio.h"
int hcf(int a, int b);
int main()
{
    int s,x,y;
    printf("Enter two number ");
    scanf("%d%d",&x,&y);
    s=hcf(x,y);
    printf("hcf of %d ",s);
    return 0;
}
int hcf( int a , int b )
{
    int i ,hcf=1;
    for(i=1;i<=a || i<=b; i++)
    {
        if((a%i==0) && (b%i==0))
        hcf=i;
    }
    return hcf;
}


