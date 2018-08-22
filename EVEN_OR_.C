/* Even or Odd */

#include<conio.h>
#include<stdio.h>
int main()
{
 int a;
 clrscr();
 printf("Please Enter Any Number \n");
 scanf("%d
 ",&a);
 if(a%2==0)
 {
  printf("Number is Even \n");
 }
 else
 {
  printf("Number is Odd");
 }
 getch();
 return 0;
}