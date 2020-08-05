#include<stdio.h>
int main()
{int a,i,count;
 count=0;
 printf("enter a number");
 scanf("%d",&a);
 for(i=2;i<a;i++)
 {if(a%i==0)
  {count++;
  }
  }
  if(count==0)
  {printf("it is a prime number");
  }
  else
  {printf("not a prime number");
   } 
}
