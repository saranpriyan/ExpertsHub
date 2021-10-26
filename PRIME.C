#include<stdio.h>
#include<conio.h>
int User_Input,i,temp;
void main()
{
clrscr();
printf("Enter The Number To Check : \n");
scanf("%d",&User_Input);
	for(i=1;i<=User_Input;i++)
	{
	temp=(User_Input%i);
		if(temp==0)
		{
		printf("The Number %d Is Divisible By %d \n",User_Input,i);
		}
	}
getch();
}