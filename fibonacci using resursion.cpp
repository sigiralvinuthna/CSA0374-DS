#include<stdio.h>
void printfibonacci(int n)
{
	static int n1=0,n2=1,n3;
	if(n>0)
	{
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d",n3);
		printfibonacci(n-1);
	}
}
int main()
{
	int n;
	printf("enter the number of elemnets");
	scanf("%d",&n);
	printf("fibonacci series");
	scanf("%d%d",0,1);
	printfibonacci(n-2);
}
