#include<stdio.h>
int main()
{
    int v[20],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&v[i]);
    }
    for(i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {
            if(i%2==0)
            {
                printf("False");
                return 0;
            }
        }
        
    }
    printf("True");
    return 0;
}