#include<conio.h>
#include<stdio.h>
int main()
{
 int qty;
 int dis=0;
 float tot,rate;
 printf("Please enter Quantity and Rate \n");
 scanf("%d%f",&qty,&rate);
 if(qty>100)
 {
  dis=10;
  tot=(qty*rate)-(qty*rate*dis/100);
  printf("Total Expense=%f",tot);
  getch();
  return 0;
 }
}