#include <iostream>

using namespace std;

int main() {
     int t;
     cin>>t;
     while(t--)
     {
        int n,i;
        int a[100],b[100];
        cin>> n;
        for(i=0;i<n;i++)
        cin>>a[i];
        for(i=0;i<n-2;i++)
        {
            if (a[i+1]>=a[i])
             b[i+1]=1;
             else
             b[i+1]=0;
        }
        b[n]=0;
         for(i=1;i<n+2;i++)
         {
             if(b[i]==1 && b[i-1]!=1)
             cout<<"("<<i-1<<" ";
             if(b[i]==0 && b[i-1]!=0)
             cout<<i-1<<")";
         }
        cout<<endl;
     }
	return 0;
}
