#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> m,n;
    int t,num;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>s>>num;
        m[s]+=num;
        n[s]++;
    }
    int size=m.size();
    int a[size],i=0;
    for(auto &it:m)
    {
        a[i]=it.second;
        i++;
    }
    sort(a,a+size);
    for(auto &it:m)
    {
        if(a[0]==it.second)
        cout<<it.first<<endl;
    }
    return 0;
}