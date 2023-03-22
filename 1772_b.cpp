#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int> r1(2),r2(2);
	    for(int i=0;i<2;i++) cin>>r1[i];
	    for(int i=0;i<2;i++) cin>>r2[i];
	int a = 0,b=0;
	if(r1[0]<r1[1] && r2[0]<r2[1] && r1[0]>r2[0] && r1[1]>r2[1]){
		cout<<"Yes"<<endl; continue;;
	}
	if(r1[0]<r1[1] && r2[0]<r2[1] && r1[0]<r2[0] && r1[1]<r2[1]){
		cout<<"Yes"<<endl; continue;
	}
	if(r1[0]>r1[1] && r2[0]>r2[1] && r1[0]<r2[0] && r1[1]<r2[1]){
		cout<<"Yes"<<endl; continue;
	}
	if(r1[0]>r1[1] && r2[0]>r2[1] && r1[0]>r2[0] && r1[1]>r2[1]){
		cout<<"Yes"<<endl; continue;
	}
	cout<<"No"<<endl;

    }
    return 0;
}