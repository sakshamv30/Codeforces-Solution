#include<iostream>
using namespace std;
int main()
{
int n,ans=0;
char c[5];
cin>>n;
while(n--)
{
cin>>c;
if(c[1]=='+')
ans++;
else
ans--;
}
cout<<ans<<endl;
return 0;
}