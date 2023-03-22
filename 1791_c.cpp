#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n;
        m=n;
        string s;
        cin>>s;
        if(n==1)
        cout<<1<<endl;
        else
        {
            for(int i=0;i<n/2;i++)
            {
                if((s[i]=='0'&&s[n-i-1]=='1')||(s[i]=='1'&&s[n-i-1]=='0'))
                {
                    m=m-2;
                }
                else
                break;
            }
            cout<<m<<endl;
        }
    }
    return 0;
}