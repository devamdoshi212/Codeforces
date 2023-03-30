#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,v,c=0,i,temp=0;
        cin>>n;
        v=(2*n)-2;
        string s,s1,s2; 
        for (i=0;i<v;i++)
        {
            cin>>s;
            if(s.length()==(n-1) && c==0)
            {
                c=1;
                s1=s;
            }
            else if(s.length()==(n-1) && c==1)
            {
                s2=s;
            }
        }
        for (i=0;i<(n-1);i++)
        {
            if(s1[i]!=s2[n-i-2])
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
    return 0;
}