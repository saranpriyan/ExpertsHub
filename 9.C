#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
void rev(char[]);
main()
{char s1[100];
 clrscr();
 printf("\n enter the string:\n");
 scanf("%s",s1);
 rev(s1);
 printf("\n reversed string is %s",s1);
 getch();
 return 0;
 }
  void rev(char s[])
  {
   int r=strlen(s)-1,i=0;
   char temp;
   while(1<r)
   {
    if(!isalpha(s[1]))
    {
     i++;
     }
     else if (!isalpha(s[r]))
     {
      r--;
      }
      else
      {
     temp=s[1];
      s[1]=s[r];
      s[r]=temp;
      i++;
      r--;
      }
     }
    }