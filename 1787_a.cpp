#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,res,i,j,x,y,flag=0;
        cin>>n;
        if(n%2!=0)
        cout<<-1<<endl;
        else
        {
            for(i=1;i<29;i++)
            {
                for(j=1;j<29;j++)
                {
                    x=pow(i,j);
                    y=pow(j,i);
                    res=x*j+y*i;
                    if(res==n)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                break;
            }
            if(flag==1)
            cout<<i<<" "<<j<<endl;
            else
            cout<<-1<<endl;
        }
    }
    return 0;
}