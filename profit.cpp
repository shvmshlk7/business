#include <bits/stdc++.h>           \\this header file includes all the header files in cpp
using namespace std;

int main() {
	int t;
	cin>>t;
	
	while(t--)
	{
	  float n,m,a,b,c;
	  cin>>n;
	  m = n*50;
	  a = m*0.2;
	  b = m*0.2;
	  c = m*0.3;
	  cout<<m-(a+b+c)<<endl;
	}
	
	return 0;
}
