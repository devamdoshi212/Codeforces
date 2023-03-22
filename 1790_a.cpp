#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string pie="314159265358979323846264338327";
        string s;
        cin>>s;
        int n=s.length(),count=0;
        for(int i=0;i<n;)
        {
            if(pie[i]==s[i])
            {
                count++;
                i++;
            }
            else
            break;
        }
        cout<<count<<endl;
    }
}