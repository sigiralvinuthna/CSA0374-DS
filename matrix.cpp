#include<stdio.h>
int main()
{
 int m,n,p,q,c,d,k,sum=0;
 int first[10][10],second[10][10],multiply[10][10];
 printf("enter the number of rows and coloums for first matrix");
 scanf("%d%d",&m,&n);
 printf("enter the elements for first matrix");
 for (c=0;c<m;c++)
{
 for (d=0;d<n;d++)
{
 scanf("%d",&first[c][d]);
}
}
 printf("enter the number of rows and coloumns for second matrix");
 scanf("%d%d",&p,&q);
 printf ("enter the values for second matrix");
 for (c=0;c<p;c++)
{
 for (d=0;d<q;d++)
{
 scanf("%d",&second[m][m]);
}
}
 for (k=0;k<p;k++)
{
 sum=sum+first[c][k]*second[k][d];
}
 multiply[c][d]=sum;
 sum=0;
 printf("product of matrices\n");
 for (c=0;c<m;c++)
{
 for (d=0;d<n;d++)
{
 printf("%d",multiply[c][d]);
 printf("\n");
}
}
 return 0;
}
