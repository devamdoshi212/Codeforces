#include<bits/stdc++.h>
using namespace std;
void solve(unordered_map<string,int> &m)
{
    string s;
    cin>>s;
    m[s]++;
    if(m[s]>1)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    unordered_map<string,int> m;
    while(t--)
    {
        solve(m);
    }
    return 0;
}