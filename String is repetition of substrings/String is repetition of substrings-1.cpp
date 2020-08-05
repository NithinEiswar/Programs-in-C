# include <iostream>
# include <string>
# define MAX(a,b) a>b?a:b

using namespace std;

int substring(string s, string sub)
{
 int m[50][50]; //Some random number for quick prototype...
 int slen = s.length()+1; 
 int sublen = sub.length()+1;
 
 for(int i=0;i<s.length(); i++)
 for(int j=0;j<s.length();j++)
  m[i][j] = 0;

//For LCS problem start the matrix from 1 so that the logic m[i-1][j-1] does not go out of bounds.
  for(int i=1;i<s.length(); i++)
   for(int j=1;j<sub.length();j++)
   {
     if(s[i] == sub[i])
       m[i][j] = 1 + m[i-1][j];
     else
       m[i][j] = MAX(m[i-1][j],m[i][j-1]);
 }

return m[s.length()-1][sub.length()-1];
}

string LCS(string s, int n)
{string ressubstring ;
//while(n>1)
//
 
 int max = 0;
 int result=0;
 for(int i=0;i<s.length()-1; i++)
  {
   string sub =s.substr(i,n);
   if((sub.length() == n) && (s.length() >= n))
    result = substring(s,sub);
    if(result > max )
    {
          max = result;
          ressubstring = sub;
          
    }
   

}

 return ressubstring;
}


int main()
{
	string s = "ABCdABCdABCd";
	int m=s.length();
	int o=m*0.5;

	for(int i=o;i>1,m%i==0;i--)
	{string str=LCS(s,i);
	  if(str!="/0")
	  	cout<<endl<<"LCS :"<<LCS(s,i)<<endl;
	  	
	}

	return 0;
}
