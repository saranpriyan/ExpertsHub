#include<stdio.h>
#include<conio.h>
int add();
int sub();
int num1,num2,num3;
char op;
void main()
{
clrscr();
saran();
printf("Enter The Two Numbers : \n");
scanf("%d%d",&num1,&num2);
num3=(num1
printf("%d %d %d = %d",num1,op,num2,num3);
getch();
}
int saran(){
printf("Enter The Operator : ");
scanf("%s",&op);
if(op==1){
printf("Addition Funtion \n");
return op;
}
else if(op==2){
printf("Subraction Function \n");
return op;
}
}
