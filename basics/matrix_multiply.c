#include <stdio.h>
#include <stdlib.h>
void readmatrix(int a[][100],int m,int n)
{
int i,j;
printf("enter the elements row by row\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
void displaymatrix(int a[][100],int m,int n)
{
int i,j;
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
printf("%5d",a[i][j]);
printf("\n");
}
}

void multmatrix(int a[][100],int b[][100],int m1,int n1,int n2)
{
int c[100][100],i,j,k;
for (i = 0; i < m1; i++) {
for (j = 0; j < n2; j++) {
c[i][j] = 0;
for (k = 0; k < n1; k++)
c[i][j] += a[i][k] * b[k][j];
}
}
printf("Product of matrix...\n");
displaymatrix(c,m1,n2);
}
int main()
{ int a[100][100],b[100][100],m1,n1,m2,n2,op;
system("clear");
printf("Enter the size of the matrix A row,column\n");
scanf("%d%d",&m1,&n1);
printf("Enter Matrix A\n");
readmatrix(a,m1,n1);

printf("Enter the size of the matrix B row,column\n"); 
scanf("%d%d",&m2,&n2);
printf("Enter Matrix B\n");
readmatrix(b,m2,n2);

system("clear");
printf("Matrix A..\n");
displaymatrix(a,m1,n1);
printf("Matrix B..\n");
displaymatrix(b,m2,n2);

while(1)
{
printf("\n************************************\n");
printf("multiply");

if(n1==m2)
multmatrix(a,b,m1,n1,n2);
else
printf("Incompatable matrix...cannot mutliply..\n");
break; 
}
}
