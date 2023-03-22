#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a1,a2,a3,a4;
        int x=0;
        int nj=0;
        int sum=0;
        cin>>a1>>a2>>a3>>a4;
        x=a1;

        if(a1==0)
        {
            if(a2==0 && a3==0 && a4==0)
            cout<<0<<endl;
            else
            cout<<1<<endl;            
        }
        else 
        {
            if(a2==a3)
            {
                sum=a4;
                nj=a1+a2+a3;
            }
            else if(a2<a3)
            {
                nj=a1+a2+a2;
                sum=(a3-a2)+a4;
            }
            else
            {
                nj=a1+a3+a3;
                sum=(a2-a3)+a4;
            }

            if(x<sum)
            nj+=x+1;
            else
            nj+=sum;
            
            cout<<nj<<endl;
        }

    }
    return 0;
}
