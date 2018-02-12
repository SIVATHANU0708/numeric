#include<stdio.h>
int main()
{
int n;
printf("enter the element");
scanf("%d",&n);
if(n>=1 && n<=32767)
{
printf("yes");
}
else
{
printf("no");
}
return 0;
}
