#include<stdio.h>
int prod(int n)
{if(n<=1)
 return 1;
 else
 return (n*prod(n-1));
}
int main()
{int a,multi;
 printf("factorial of which number");
 scanf("%d",&a);
 multi=prod(a);
 printf("factorial is %d",multi);
}
