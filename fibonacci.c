#include<stdio.h>
int main()
{
	int n,x=0,y=1,z,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d ",x);
		z=x+y;
		x=y;
		y=z;
	}
	return 0;
}