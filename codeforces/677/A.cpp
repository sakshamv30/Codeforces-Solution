#include <iostream>
using namespace std;
 
int main() {
 
	int t;
	cin>>t;
	int a;
	cin>>a;
 
	int count=0;
	for(int i=0;i<t;i++)
	{
		int x;
		cin>>x;
		if(x>a) count+=2;
		else
		count+=1;
 
 
	}
	cout<<count<<endl;
	return 0;
}