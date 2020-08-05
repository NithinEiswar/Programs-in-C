#include<stdio.h>
int main()
{int a;
 int sum=1;
 printf("enter a number");
 scanf("%d",&a);
 while(a/10!=0)
 {a=a/10;
  sum++;
 }
 printf("number of digits is %d",sum);
}
 
 
