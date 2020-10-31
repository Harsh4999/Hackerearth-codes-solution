/* Problem on = https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/mojtaba-prepares-contest-29b2a044/ */

#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t,c,gbc,pbc,p,i=0,sum=0,a,b;
	cin>>c;
	for(i=0;i<c;i++)
	{
		if(i%2==0)
		{
				cin>>gbc;
				cin>>pbc;
				cin>>p;
				for(t=0;t<p;t++)
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
		}
		else
		{
			cin>>gbc;
			cin>>pbc;
			cin>>p;
			t=gbc;
			gbc=pbc;
			pbc=t;

			for(t=0;t<p;t++)
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
		}	
		
		cout<<sum<<"\n";
		sum=0;

	}
	return 0;

}
