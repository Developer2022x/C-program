#include<stdio.h>
int main()
{printf("enter a 3 digit number");
int a,b,c,d,e;
scanf("%d",&a);
b=a%10;
c=(a/10)%10;
d=(a/100)%10;
e=0;
e=e*10+b;
e=e*10+c;
e=e*10+d;

printf("Reversed number is %d",e);
return 0;}

