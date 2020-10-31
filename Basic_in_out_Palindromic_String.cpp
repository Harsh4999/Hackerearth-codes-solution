#include<bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDJE
		freopen("input.txt", "r+", stdin);
		freopen("output.txt", "w+", stdout);
	#endif
	char s[100],p[100];
	int i,t,v,o=0;
	gets(s);
	t=strlen(s);
	for(i=0,v=t-1;v>=0;i++,v--)
	{
		p[i]=s[v];
	}
	p[i]='\0';
	for(i=0;i<t;i++)
	{
		if(s[i]!=p[i])
		{
			o++;
			break;
		}
	}
	if(o==1)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}

	return 0;

}