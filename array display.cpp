#include<stdio.h>
int main()
{
	
	int i,t,a[10],n,m,s,j=0,b[10];
	printf("enter the limit");
	scanf("%d",&n);
	printf("enter the values");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("given values are");
	for (i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
	printf("enter the position to be update");
	scanf("%d",&t);
	printf("enter the value to be update");
	scanf("%d",&s);
	for (i=0;i<n;i++)
	{
		if (i==t)
		{
			a[i]=s;
		}
	}
	printf("updated value is ");
	for (i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
	return 0;
}

