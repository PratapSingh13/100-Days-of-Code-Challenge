#include<conio.h>
#include<stdio.h>
int main()
{
  int X1,X2,A,S,M,D,P;
  clrscr();
  printf("Please Enter any Two Numbers\n");
  scanf("%d%d",&X1,&X2);
  A=X1+X2;
  S=X1-X2;
  M=X1*X2;
  D=X1/X2;
  P=(X1+X2)*100/200;
  printf("Addition=%d\nSubtraction=%d\nMultiplication=%d\nDivide=%d\nPercentage=%d\n",A,S,M,D,P);
  getch();
  return 0;
}