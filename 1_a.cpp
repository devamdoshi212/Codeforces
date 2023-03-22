#include<iostream>
using namespace std;
using ll=long long;
int main()
{
    ll n,m,a,temp,temp1;
    cin>>n>>m>>a;
    if(n%a==0)
    temp=(n/a);
    else
    temp=(n/a)+1;
    if(m%a==0)
    temp1=(m/a);
    else
    temp1=(m/a)+1;

    cout<<temp*temp1;
    return 0;
}