#include<stdio.h>
int main()
{
    int n,sum=0,r,temp;
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(sum==temp)
    printf("True");
    else
    printf("False");
    return 0;
    
}