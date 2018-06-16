#include <iostream>

using namespace std;

int main() {
	int t;
	cin>> t;
	while(t--)
	{
	   int n,i,j,s,m;
	   int a[1000];
	   cin>>n;
	   for(i=0;i<n-1;i++)
	   cin>>a[i];
	   for(j=1;j<=n && m==1 ;j++)
	   {
	    for(i=0;i<n-1 && m==1  ;i++)
	    {
	        if(j!=a[i])
	        m=0;
	        else
             m=1;
	    }


	   }
	   s=j;
	   cout<<s<<endl;
	}
	return 0;
}
