#include<bits/stdc++.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUGJE
		freopen("input.txt", "r+", stdin);
		freopen("output.txt", "w+", stdout);
	#endif
	char s[100];
	int i;
	cin>>s;
	for(i=0;s[i]!='\0';i++)
	{
		if(isupper(s[i]))
		{
			s[i]=tolower(s[i]);
		}
		else
		{
			s[i]=toupper(s[i]);
		}
	}
	cout<<s;
}