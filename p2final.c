#include <stdio.h>
int input()
{
  int a;
  printf("enter the value");
  scanf("%d",&a);
  return a;
}
int comp(int a,int b,int c)
{
  if((a>b)&&(a>c))
  return a;
  else if((b>a)&&(b>c))
  return b;
  else
  return c;
}
int output(int big)
{
  printf("biggest number is %d",big);
}
int main()
{
  int x,y,z,big;
  x=input();
  y=input();
  z=input();
  big=comp(x,y,z);
  output(big);
  return 0;
}