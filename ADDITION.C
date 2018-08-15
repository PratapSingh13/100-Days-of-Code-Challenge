/*Addition of Two Numbers*/


#include<conio.h>
#include<stdio.h>
void main()
{

   int a,b,p,q,r,s;
    clrscr();
   printf("plz enter the two value\n");
   scanf("%d%d",&a,&b);
   p =a*b;
   q =a+b;
   r =a-b;
   s =a/b;

   printf("multiply=%d\naddition=%d\nsubtract=%d\ndivide=%d \n",p,q,r,s);
   getch();
}



