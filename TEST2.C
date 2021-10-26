#include<stdio.h>
#include<conio.h>
int Add();
int Sub();
int num1,num2,num3,op;
void main()
{
	clrscr();
	printf("Enter The Operator : ");
	scanf("%d",&op);
	printf("Enter The Two Numbers : \n");
	scanf("%d%d",&num1,&num2);
	if(op==1)
	{
		num3=Add(num1,num2);
		printf("The Addition Answer Is %d",op);
	}
	if(op==2)
	{
		num3=Sub(num1,num2);
		printf("The Subracton Answer Is %d",op);
	}
	getch();
}

int Add(int a, int b)
{
return a+b;
}
int Sub(int a, int b)
{
return a-b;
}