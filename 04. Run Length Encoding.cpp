
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here
  int count=1,i=1;
  string ans;
  for(i=1;src[i];i++)
  {
      if(src[i]!=src[i-1])
      {
         ans+=src[i-1]+to_string(count);
         count=1;
      }
      else
        count++;
  }
  ans+=src[i-1]+to_string(count);
  return ans;
}     
 
