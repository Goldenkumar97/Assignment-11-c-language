//Write a function of first n terms of fabbonacci series (TSRN).
#include"stdio.h"
void fabo(int x);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    fabo(x);
    return 0;

}
void fabo(int x )
{
    int i,a=0,b=1,c=0;
    
        for(i=0;i<=x;i++)
        {
        c = a + b;
        b = a;
        a = c;
        printf("%d ", c);
        }

}