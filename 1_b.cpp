//incomplete
#include<bits/stdc++.h>
#include <ctype.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        int i=2,temp=0;
        if(s[0]=='R')
        {
            if(isdigit(s[1]))
            {
                while(s[i]!='C')
                {
                    i++;
                }
                if(s[i]=='C')
                temp=1;
            }
        }
        string a,b;
        int r1,c1,f=0,flag=0,rr;
        char c;
        if(temp==1)
        {
            for(int j=1;j<i;j++)
            {
                a[j-1]=s[j];
            }
            for(int j=i+1;j<s.length();j++)
            {
                b[f]=s[j];
                f++;
            }
            r1=stoi(a);
            c1=stoi(b);
            while (c1)
            {
                if(c1%26==0)
                {
                    flag=1;
                }
                if(c1==26)
                c1=0;
                else if(c1>26)
                {
                    rr=c1/26;
                    c1=c1-(c1*rr);
                    c=rr+65-1;
                    cout<<c;
                }
                else
                {
                    c=c1+65-1;
                    c1=c1/26;
                    cout<<c;
                }
            }
            if(flag==1)
            cout<<"Z";

            cout<<"YES"<<r1<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    return 0;
}