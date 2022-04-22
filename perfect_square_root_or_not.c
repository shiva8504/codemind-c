#include<stdio.h>
int main()
    {
        int n,v,k,l=0;
        scanf("%d",&n);
        for(v=1;v<n;v++)
        {
            k=v*v;
            if(k==n)
            {
                l++;
            }
        }
       if(l==1)
       {
           printf("True");
       }
       else
       {
           printf("False");
       }
       return 0;
    }