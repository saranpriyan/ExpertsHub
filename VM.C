#include<stdio.h>
#include<conio.h>

int a=1;
int b,temp;
char c;
void main()
{
	while(a){
	clrscr();
	break;
	printf("Enter The Two Numbers :\n");
	scanf("%d %d",&a,&b);
	printf("Enter The Choice :\n");
	scanf("%s",&c);
//*************//*************(switch)***************//*********************\\
	switch(c)
		{
		case 'a':
		printf("Addition ");
		temp=a+b;
		printf("Answer : %d",temp);
		break;

		case 'b':
		printf("Subraction ");
		temp=a-b;
		printf("Answer : %d",temp);
		break;

		case 'c':
		printf("Multiplication ");
		temp=a*b;
		printf("Answer : %d",temp);
		break;

		case 'd':
		printf("Quotient ");
		temp=a/b;
		printf("Answer : %d",temp);
		break;

		case 'e':
		printf("Remainder ");
		temp=a%b;
		printf("Answer : %d",temp);
		break;

		default:
		printf("Invalid Operation");
		}
		printf("\n");
		}
getch();
}
//**************//************(Byebye!!)**************//********************//






