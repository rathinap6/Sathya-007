#include<stdio.h>
int c(char*s)
{
int a=0,w=0;
while(*s)
{
if(*s==' '||*s=='\n'||*s=='\t')
a=0;
else if(a==0)
{
    a=1;
    ++w;
}
++s;
}
printf("No of words:%d",w);
}
int main()
{
    int w;
    char s[200];
    printf("Enter the string:");
    scanf("%[^\n]s",&s);
    c(s);
  }
