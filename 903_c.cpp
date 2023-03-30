#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,temp;
    cin>>n;
    int a[n];
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        cin>>temp;
        m[temp]++;
        a[i]=m[temp];
    }
    sort(a,a + n);
    cout<<a[n-1];
}
int main()
{
    solve();
    return 0;
}