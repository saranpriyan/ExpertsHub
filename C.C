#include<stdio.h>
main()
{
int stud[4][2];
int i;
for(i=0;i<3;i++)
{
printf("\n Enter the %d student roll no andmark;",i);
scanf("%d%d",&stud[i][0],&stud[i][1]);
}
for(i=0;i,i<3;i++)
printf("%d students roll no %d mark %d",i,stud[i][0],stud[i][1]);
}
