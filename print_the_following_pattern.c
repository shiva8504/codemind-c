#include<stdio.h>
int main()
{
    int r,v,k;
    scanf("%d",&r);
    for(v=1;v<=r;v++)
    {
        for(k=1;k<=r;k++)
        {
            if(v+k==r+1 || v-k==0)
            {
                printf("x");
            }
            else
            {
                printf("0");
            }
        }
        printf("
");
    }
}