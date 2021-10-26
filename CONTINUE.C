#include<stdio.h>
#include<conio.h>

int a=1;
int b,temp;
char c;
void main()
{
	clrscr();
	printf("Enter The Value Of a :\n");
	scanf("%d",&a);
	for(a=0;a<10;a++)
	{
		if(a==4)
		{
		continue;
		}
	printf("%d \n",a);
	}
getch();
}