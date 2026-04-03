
#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c;
printf  ("a= " );
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c= ");
scanf("%d",&c);
if(a<b && a<c){
printf("a is less than  ");
}
else   {
if(b<a &&b<c){
printf(" b is less");     }      }
//else{
if (c<a && c<b){
printf("c is less"); }

getch();
}


