#include<stdio.h>
void main()
{
int a,b,q,r;
printf("enter a,b values...");
scanf("%d%d",&a,&b);
q=a/b;
r=a-q*b;
printf("quotient is....%d", q);
printf("remainder is...%d", r);
}