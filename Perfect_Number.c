#include<stdio.h>
int main()
{
    int i,n,r,sum=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        r=n%i;
        if(r==0)
        {
            sum=sum+i;
        }
    }
    if(n==sum)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}