#include<stdio.h>
#include<conio.h>
int a[3][3];
int i,j;
void main()
{
clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("a[%d][%d] = ",i,j);
	scanf("%d",&a[i][j]);
	}
}
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf(" %d ",a[i][j]);
	}
	printf("\n");
}
getch();
}