
#include<stdio.h>
#include<conio.h>
int a;
int *p=&a;
void main()
{
clrscr();
printf("Enter The Value Of a : ");
scanf("%d",&a);
printf("Value Of The Pointer Is %d \n",*p);
printf("Address Of The Pointer Is %x",p);
getch();
}