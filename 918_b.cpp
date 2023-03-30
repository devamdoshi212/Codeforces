#include<bits/stdc++.h>
using namespace std;
void solve(unordered_map<string,string> &m)
{
    int n,mm;
    cin>>n>>mm;
    string s,r;
    for(int i=0;i<n;i++)
    {
        cin>>s>>r;
        m[r]=s;
    }
    for(int i=0;i<mm;i++)
    {
        cin>>s>>r;
        r=r.erase(r.length()-1);
        auto temp = m.find(r);
        cout<<s<<" "<<r<<"; #"<<temp->second<<endl;
    }
}
int main()
{
    unordered_map<string,string> m;
    solve(m);
    return 0;
}