#include<stdio.h>
int main()
{
    int n,k,v[900],r=0;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=n-1;k>=0;k--)
    {
        if(k%2==0)
        {
            r+=v[k];
        }
    }
    printf("%d",r);
}