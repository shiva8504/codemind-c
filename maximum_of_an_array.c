#include<stdio.h>
int main()
{
    int s,v[420],n,r;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    r=v[0];
    for(s=0;s<n;s++)
    {
        if(v[s]>=r)
        {
            r=v[s];
        }
    }
    printf("%d",r);
    return 0;
}