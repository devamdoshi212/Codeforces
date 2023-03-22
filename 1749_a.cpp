#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[m],b[m];
        for(int i=0;i<m;i++)
        cin>>a[i]>>b[i];

        if(n==1 && m==1)
        cout<<"NO"<<endl;
        else if(n>1 && m==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}