#include<stdio.h>
void main()
{
int f1,f2,next,n,i;
printf("enter the limit for fibnocii");
scanf("%d",&n);
f1=0;
f2=1;
printf("%d%d",f1,f2);
for(i=1;i<=n;i++)
{
next=f1+f2;
printf("%d",next);
f1=f2;
f2=next;
}

}


