#include <stdio.h>

float input()
{
  float n;
  printf("Enter a number: ");
  scanf("%f",&n);
  return n;
}

float my_sqrt(float n)
{
  double start,end,mid;
  start=0,end=n;
  
  while((end-start)>=0.000001)
  {
    mid=(start+end)/2;
    
    if(mid*mid<n)
    start=mid;

    if(mid*mid>=n)
    end=mid;
  }
  
  return mid;
}

void output(float n,float res)
{
  printf("Square root of %f is: %f\n",n,res);
}

int main()
{
  float a,b;
  a=input();
  b=my_sqrt(a);
  output(a,b);
  return 0;
}