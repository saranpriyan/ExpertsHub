#include<stdio.h>
#include<conio.h>
int Add();
int sub();
int num1,num2,num3,op;
int main()
{
	clrscr();
	printf("Enter The Operator : ");
	scanf("%d",&op);
	Add();
	printf("Enter The Two Numbers : \n");
	scanf("%d%d",&num1,&num2);
	num3=Add(num1,num2);
	printf("%d",num3);
	getch();
	return 0;
}

int Add(int num1,int num2)
	{
		if(op==1)
		{
		int num3 = num1+num2;
		return num3;
		}
		else
		{
		int op=sub(num1,num2);
		return op;
		}
		}
int sub(int num1, int num2)
{
int num3 = num1-num2;
return num3;
}