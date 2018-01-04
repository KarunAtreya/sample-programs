#include <stdio.h>
int main()
{
int i,j,n,x,count;
count=0;
x=0;
printf("enter any no  ");
scanf("%d",&n);
printf("\n all prime no up to %d\n",n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
if(i%j==0)
{
x=x+1;
}
}
if(x==2)
{
printf("%d\t",i);
count=count+1;
}
x=0;
}
printf("\n there are %d prime no upto %d",count,n);
return 0;
}
