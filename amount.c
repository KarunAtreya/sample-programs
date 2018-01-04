#include <stdio.h>
int main()
{
float i,unit,amount;
amount=0;
printf("enter the unit  ");
scanf("%f",&unit);
for(i=1;i<=unit;i++){
if(i<=20)
amount=80;
else if(i<=100 && i>=20)
amount=amount+7.5;
else if(i<=200 && i>=100)
amount=amount+8.5;
else if(i<200)
amount=amount+9.5;
}
printf("amount = RS%f",amount);
return 0;
}
