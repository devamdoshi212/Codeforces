#include<bits/stdc++.h>
using namespace std;
int main()
{
    int d,h;
    cin>>d>>h;
    int a[d+1],b[d+1];//a[]=minimum,b[]=maximum
    int mi=0,max=0;
    for(int i=0;i<d;i++)
    {
        cin>>a[i]>>b[i];
        mi+=a[i];
        max+=b[i];
    }
    if(h>max || h<mi)
    cout<<"NO";
    else
    {
        cout<<"YES"<<endl;
        for(int t=0;t<d;t++)
        {
            cout<<min(b[t],h-mi+a[t])<<" ";
            h-=min(b[t],h-mi+a[t]);
            mi-=a[t];
        }
    }

    return 0;
}