#include<iostream>
#include<ctype.h>
using namespace std;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int sum=0;
//         string s,a;
//         cin>>s;
//         for(int i=0;i<s.length();i++)
//         {
//             if(isdigit(s[i]))
//             a[i]=s[i];
//             else
//             a[i]='0';
//         }
//         int x=stoi(a);
//         for(int i=0;i<s.length();i++)
//         {
//             sum=sum+(x%10);
//             x=x/10;
//         }
//         cout<<sum<<endl;
//     }
//     return 0;
// }
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        cout<<s[0]-'0'+s[2]-'0'<<endl;
    }
        return 0;
}