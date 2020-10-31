#include <bits/stdc++.h>

using namespace std;

int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt", "r+", stdin);
		freopen("output.txt", "w+", stdout);
	#endif

	int i,n,f=1;
	cin>>n;
	for(i=n;i>0;i--)
	{
		f=f*i;
	}	
	cout<<f;
	return 0;

}
