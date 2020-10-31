/* Problem on = https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/count-divisors/ */
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
