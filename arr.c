#include<stdio.h>
void main()
{
int a[5],i,n;
printf("enter 5 numbers");
for(i=0;i<5;i++)
{
scanf("%d",&a[i]);
}
n=a[0];
for(i=0;i<5;i++)
{
if(a[0]>a[i])
{
a[0]=a[i];
}
}
printf("smallest element is %d",a[0]);
}

