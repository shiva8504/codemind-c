#include<stdio.h>
int main()
{
    int v[2004],k,r,j;
    scanf("%d",&j);
    for(k=0;k<j;k++)
    {
        scanf("%d",&v[k]);
    }
    for(k=j-1;k>=0;k--)
    {
        if(v[k]%2!=0)
    
      { 
          r=k;
        break;
      }
    }
    printf("%d",r);
}