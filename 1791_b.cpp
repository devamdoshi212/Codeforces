#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0,temp=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++)
        {
            if(x==1 && y==1)
            temp=1;

            if(s[i]=='U')
            y++;
            else if(s[i]=='D')
            y--;
            else if(s[i]=='R')
            x++;
            else if(s[i]=='L')
            x--;
        }
        if(x==1 && y==1)
        temp=1;
        
        if(temp==1)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}