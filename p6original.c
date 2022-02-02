#include <stdio.h>

void input_2_strng(char *a,char *b)
{
  printf("Enter a word ");
  scanf("%s",a);
  printf("Enter a word ");
  scanf("%s",b);
}
int cmp(char *a,char *b)
{
  int i=0,res;
  while(a[i]!='\0' && b[i]!='\0')
  {
    if(a[i]>b[i])
    {
      res=-1;
      break;
    }
    else if(b[i]>a[i])
    {
      res=1;
      break;
    }
    else    
    {
      i++;
    }
  }
  if(a[i]=='\0')
  {
    res=1;
  }
  else if(b[i]=='\0')
  {
    res=-1;
  }
  if(a[i]=='\0' && b[i]=='\0')
  {
    res=0;
  }
  return res;
}

void out(char *a,char *b,int ans)
{
  if(ans==-1)
  {
    printf("%s is greater than %s",a,b);
  }
  if(ans==1)
  {
    printf("%s is greater than %s",b,a);
  }
  if(ans==0)
  {
    printf("%s is equal to %s",a,b);
  }
}

int main()
{
  char a[20],b[20];
  int ans;
  input_2_strng(a,b);
  ans=cmp(a,b);
  out(a,b,ans);
  return 0;
}