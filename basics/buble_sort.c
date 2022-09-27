#include <stdio.h>
main()
{
int a[25],n;
int i,j,t;
printf("enter the size of array");
scanf("%d",&n);
printf("enter the elements are");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
t=a[j];
a[j]=a[j+1];
a[j+1]=t;
}
}
}
printf("sorted array is:");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
} 
