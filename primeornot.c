#include <stdio.h>
int main()
{
int i,n,x;
x=0;
printf("enter any no  ");
scanf("%d",&n);

for(i=1;i<=n;i++)
{
if(n%i==0)
x=x+1;
}
if(x==2)
printf("\n %d is prime number",n);
else
printf("\n %d is not prime number",n);
return 0;
}
