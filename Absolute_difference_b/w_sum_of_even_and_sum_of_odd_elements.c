#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,v[420],r=0,m=0;
    scanf("%d",&n);
    for(s=0;s<n;s++)
    {
        scanf("%d",&v[s]);
    }
    for(s=0;s<n;s++)
    {
        if(v[s]%2==0)
        {
            r+=v[s];
        }
        else
        {
            m+=v[s];
        }
    }
    printf("%d",abs(r-m));
}