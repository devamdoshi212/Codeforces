#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
    map<string,int>m;
    int t;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s;
        m[s]=m[s]+1;
        if(m[s]==1)
        cout<<"OK"<<endl;
        else
        cout<<s<<m[s]-1<<endl;
    }
    return 0;
}