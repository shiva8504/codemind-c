#include<stdio.h>
int main()
{    
    int n,r,sum=0,sqr;
    scanf("%d",&n);
    sqr=n*n;
    while(sqr)
    {
        r=sqr%10;
        sum=sum+r;
        sqr=sqr/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}