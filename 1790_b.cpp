#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r,sum=0;
        cin>>n>>s>>r;
        for(int i=0;i<n;i++)
        {
            if(i==0)
                cout<<s-r<<" ";
            else
            {
                sum=r/(n-i);
                cout<<sum<<" ";
                r-=sum;
            }
        }
        cout<<endl;
    }
    return 0;
}