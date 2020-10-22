#include <bits/stdc++.h>

using namespace std;

int main()
{

	int c,gbc,pbc,p,i=0,sum=0,a,b;
	cin>>c;
	for(i=0;i<c;i++)
	{
		cin>>gbc;
		cin>>pbc;
		cin>>p;
		for(i=0;i<p;i++)
		{
			cin>>a;
			cin>>b;
			if(a==1)
			{
				sum=sum+gbc;
			}
			if(b==1)
			{
				sum=sum+pbc;
			}
			a=0;
			b=0;
		}
		cout<<sum<<"\n";

	}
	return 0;

}