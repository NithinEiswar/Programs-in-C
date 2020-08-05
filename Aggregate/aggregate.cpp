#include<stdio.h>
int main()
{int a,b,c,d,e,f;
 float g;
 printf("enter the marks of 5 subjects");
 scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
 f=a+b+c+d+e;
 g=f*0.2;
 printf("aggregate and percentage of marks are \nrespectively %d %f",f,g);
}
