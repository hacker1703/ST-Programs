#include<stdio.h>
#include<stdlib.h>
void main()
{
int dd,mm,yy,nd,nm,ny,nday,ly,valid;
printf("Enter the date, month and year\n");
scanf("%d%d%d",&dd,&mm,&yy);
if((yy%4==0 && yy%100!=0)||(yy%400==0))
{
ly=1;}
else
ly=0;
while ((dd<0||dd>31)||(mm<1||mm>12))
{
printf("Invalid Date\nTry again\n");
printf("Enter the date, month and year\n");
scanf("%d%d%d",&dd,&mm,&yy);
}
while((mm==2 && ly==1 && dd>29)||(mm==2 && ly==0 && dd>28))
{
printf("Invalid date\nTry again\n");
printf("Enter the date, month and year\n");
scanf("%d%d%d",&dd,&mm,&yy);
}
while((mm==6||mm==4||mm==9||mm==11) && dd>30)
{
printf("Invalid date\nTry again\n");
printf("Enter the date, month and year\n");
scanf("%d%d%d",&dd,&mm,&yy);
}
printf("Entered date = %d-%d-%d\n",dd,mm,yy);
if(dd==1)
{
if(mm==1)
{
dd=31;
mm=12;
yy=yy-1;
}
else if(ly==1 && mm==3)
{
dd=29;
mm=mm-1;
}
else if(ly==0 && mm==3)
{
dd=28;
mm=mm-1;
}
else if(mm==2||mm==4||mm==6||mm==8||mm==9||mm==11)
{
dd=31;
mm=mm-1;
}
else
{
dd=30;
mm=mm-1;
}
}
else
{
dd=dd-1;
}
printf("\nPrevious date = %d-%d-%d \n",dd,mm,yy);
}