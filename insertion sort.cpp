#include<stdio.h>
int main()
{
	int i,j,count,temp,number[25];
	printf("how many numbers u are going to enter?:");
	scanf("%d",&count);
	printf("enter %d elemnts:,count");
	//tthis loop would store the input numbers iin array
	for(i=0;i<count;i++)
	scanf("%d",&number[i]);
	//implementation of insertion sort algorithm
	for(i=0;i<count;i++)
	{
		temp=number[i];
		j=i-1;
		while((temp<number[j])&&(j<=0))
		{
			number[j+1]=number[j];
			j=j-1;
		}
		number[j+1]=temp;
	 } 
	 printf("order of sortedelements:");
	 for(i=0;i<count;i++)
	 printf("%d",number[i]);
	 return 0;
}
