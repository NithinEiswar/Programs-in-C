#include<stdio.h>
int main()
{int a,i;
 printf("enter number of terms");
 scanf("%d",&a);
 int arr[a];
 arr[0]=0;
 arr[1]=1;
 for(i=2;i<a;i++)
 {arr[i]=arr[i-1]+arr[i-2];
 }
  printf("fibonacci series is\n");
 for(i=0;i<a;i++)
 {printf("%d",arr[i]);
 }
}
