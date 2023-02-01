#include <stdio.h>
#include <stdlib.h>
int valid_date(int date,int mon,int year);
int main()
{
int d1,m1,y1,d2,m2,y2,dd,dm,dy;
printf("enter the start date(DD/MM/YYYY):");
scanf("%d%d%d",&d1,&m1,&y1);
printf("enter the end date(DD/MM/YYYY):");
scanf("%d%d%d",&d2,&m2,&y2);
if(!valid_date(d1,m1,y1))
printf("first date is invalid\n");
if(!valid_date(d2,m2,y2))
{
printf("second date is invalid\n");
exit(0);
}
if(d2<d1)
{
if(m2==3)
{
if((y2%4==0&&y2%100!=0||y2%400==0))
d2+=29;
else
d2+=28;
}
else if(m2==5||m2==7||m2==10||m2==12)
d2+=30;
else
d2 +=31;
m2=m2-1;
}
if(m2 < m1)
{
m2+=12;
y2-=1;
}
dd=d2-d1;
dm=m2-m1;
dy=y2-y1;
printf("difference:%d years %02d months end %02d days\n",dy,dm,dd);
return 0;
}
int valid_date(int day,int mon,int year)
{
int is_valid=1,isleap=0;
if(year>=1800 && year<=9999)
{
if((year%4==0&&year%100!=0||year%400==0))
isleap=1;
if(mon>=1&&mon<=12)
{
if(mon==2)
if(isleap&&day==29)
is_valid=1;
else if(day>28)
is_valid=0;
else if(mon==4||mon==6||mon==9||mon==11)
if(day>30)
is_valid=0;
else if(day>31)
is_valid=0;
}
else
is_valid=0;
}
else
is_valid=0;
return is_valid;
}