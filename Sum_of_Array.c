#include<stdio.h>
int main()
{
    int s,v[420],n,l;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    for(s=0;s<n;s++)
    {
        l+=v[s];
    }
    printf("%d",l);
}