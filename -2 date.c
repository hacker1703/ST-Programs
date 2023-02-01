#include<stdio.h>
struct date{
int dd,mm,yy;
};
//function to get yesterday's (previous) date
void getYesterdayDate(struct date *d){
if(d->dd==1){
if(d->mm==4||d->mm==6||d->mm==9||d->mm==11){
d->dd=31;
d->mm--;
}
else if(d->mm==3){
if((d->yy%4)==0) d->dd=29;
else d->dd=28;
d->mm--;
}
else if(d->mm==1){
d->dd=31;
d->mm=12;
d->yy--;
}
else if(d->mm==2){
d->dd=31;
d->mm--;
}
else{
d->dd=30;
d->mm--;
}
}
else{
d->dd--;
}
}
int main(){
//date structure variable declaration
struct date dt;
//read date
printf("Enter date in dd/mm/yyyy format: ");
scanf("%d/%d/%d",&dt.dd,&dt.mm,&dt.yy);
//print current date
printf("Entered current date is: ");
printf("%02d/%02d/%02d\n",dt.dd,dt.mm,dt.yy);
//get previous (yesterday) date
getYesterdayDate(&dt);
getYesterdayDate(&dt);
//print yesterday's date
printf("Previous (Yesterday's) date is: ");
printf("%02d/%02d/%02d\n",dt.dd,dt.mm,dt.yy);
return 0;
}
