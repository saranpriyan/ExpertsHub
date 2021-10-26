#include<stdio.h>
#include<stdlib.h>
void conversion(int num,int base)
{
 int remainder=num%base;
 if(num==0)
  return;
  conversion(num/base,base);
 if(remainder<10)
 printf("%d",remainder);
 else
 printf("%d",remainder-10+'a');
 }
  int main()
  {
   int num,choic;
   printf("\n enter a positive decimalnumber:\t");
   scanf("%d",&num);
   do
   {
    printf("\n1.decimal to binary conversio");
    printf("\n2.decimal to octal conversion");
    printf("\3.decimalto hexadecimal conversion");
    printf("\n4.quit");
    printf("\n enter your option:\t");
    scanf("%d",& choice);
    switch(choice)
    {
      case1:printf("\nbinary value:\t");
	    conversion (num,2);
	   break;
      case2:printf("\noctal value:\t");
	    conversion(num,8);
	    break;
     case3:printf("\n hexadecimal value :\t");
	   conversion(num,16);
	   break;
    case4: exit(0);
    default:printf(" enter a correct input\n");
    //break;
    }
    while(choice!=4);
    printf("\n");
    return 0;
    }