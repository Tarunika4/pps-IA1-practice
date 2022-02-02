#include<stdio.h>
int input(int*a,int*b)
{
  printf("enter the numbers");
  scanf("%d%d",a,b);
}
int add(int a,int b,int*sum)
{
  *sum=a+b;
}
int output(int a,int b,int sum)
{
  printf("sum of two numbers is %d+%d=%d",a,b,sum);
}
int main()
{
  int x,y,z;
  input(&x,&y);
  add(x,y,&z);
  output(x,y,z);
  return 0;
}