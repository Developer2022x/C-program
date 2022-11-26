#include<stdio.h>
int main()
{
printf("enter a 3 digit number\n");
int a,b,c,d;
scanf("%d",&a);
b=a%10;
c=(a/10)%10;
d=(a/100)%10;

printf("%d",b+c+d);
return 0;
}
