#include<stdio.h>
int main()
{
    int s,n[100],v,t;
    scanf("%d",&t);
    for(s=0;s<t;s++)
    {
        scanf("%d",&n[s]);
    }
    for(s=t-1;s>=0;s--)
    if(n[s]%2==0)
    {
        v=s;
        break;
    }
    printf("%d",v);
}