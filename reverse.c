#include <stdio.h>
int main(){
int n,firstdigit,seconddigit,reverse;
printf("enter any two digit no");
scanf("%d",&n);
firstdigit=n/10;
seconddigit=n%10;
reverse=(seconddigit*10)+firstdigit;
printf("the reversal no is %d",reverse);
  return 0;
}
