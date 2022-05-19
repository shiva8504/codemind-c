#include<stdio.h>
int main()
{
    int n,s,v[100],r;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    for(s=n-1;s>=0;s--)
    {
        if(s%2!=0)
        {
            r+=v[s];
        }
    }
    printf("%d",r);
}