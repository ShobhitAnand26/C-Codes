#include <iostream>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{   int type,l;
	    string x;
	    cin>>x;
	    l=x.length();
	    if(l==1)
        {
            if(x[0]>=48 && x[0]<=57)
               type=4;else type=1;
        }
        else
        {
            int i,j,flag=0, cnt =0;
            for(i=0;i<l;i++)
            {
                if(x[i]=='.')
                {flag=1;
                break;}
            }
            for(j=i+1;j<l;j++)
            {
                cnt++;
            }
            if(cnt>5)
                type=8;
            else type =4;
            if(flag==0)
            {
                type=4;
            }
        }
        cout<<type<<endl;
	}
	return 0;
}
