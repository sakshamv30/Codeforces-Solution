#include <bits/stdc++.h>
 
using namespace std;
 
string s;
long n,i,a[1000],d;
 
int main(){
	cin>>s;
	a['z']=0;
	for(i=0;i<s.length();i++)
		if(a[s[i]]==0)
			{
				a[s[i]]++;
				d++;
			}	
	if(d%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
	return 0;
}