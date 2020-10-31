#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt", "r+", stdin);
		freopen("output.txt", "w+", stdout);
	#endif
	int i,j,l,k,t=0;
	cin>>j;
	cin>>l;
	cin>>k;
	for(i=j;i<=l;i++)
	{
		if(i%k==0)
		{
			t++;
		}
	}
	cout<<t;
}