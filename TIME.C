#include<stdio.h>
#include<conio.h>
#include<time.h>
void main()
{
clrscr();
while(1){
time_t tm;
time(&tm);
printf("%s",ctime(&tm));
}
getch();
}