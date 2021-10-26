#include<stdio.h>
#include<conio.h>
int a[5];
int i, b,temp;
const float pi=3.14;
void main()
{
	clrscr();
	printf("Enter The Array Size : \n");
	scanf("%d",&b);
	scanf("%f",&pi);
	printf("%f",pi);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
	for(i=1;i<=b;i++)
	{
		printf("Enter The Number %d : \n",i);
		scanf("%d",&a[i]);
	}
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
	for(i=1;i<=b;i++)
	{
		printf("a[%d]={%d} \n",i,a[i]);
	}
getch();
}