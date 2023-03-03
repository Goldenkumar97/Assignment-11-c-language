/* Write a function to calculate LCM of two numbers (TSRS)*/
#include"stdio.h"
int lcm(int a,int b);
int main()
{
    int s,x,y;
    printf("Enter two number ");
    scanf("%d%d",&x,&y);
    s=lcm(x,y);
    printf("lcm of %d ",s);
}
int lcm(int a , int b)
{
    int i;
    for(i=1;i<a*b;i++)
    {
        if((i%a==0) && (i%b==0))
        break;
    }
    return i;
}