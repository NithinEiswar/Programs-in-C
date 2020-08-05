#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()
{char ch='a';
  int ar[26]={0};
  int i,k=0;
 char arr[80];
 printf("enter the string");                          
 gets (arr);
do
{
for(i=0;i<80;i++)
{if(arr[i]==ch)
 ar[ch-'a']++;
 if( ch == 'b')
  	ar[1]--;
}
ch++;
}while(ch<='z');
 ch='a';
 for(i=0;i<26;i++)
 {printf("%c=%d ",ch,ar[i]);
  ch++;
 }
}
