#include <iostream>
using namespace std;

int main() {
	int x=0,y=0;
	 
	 for(int i=0;i<5;i++)
	 {
	 	
	 for(int j=0;j<5;j++)
	 {	
	 	int a;
	 	cin>>a;
	 	if(a==1){ x=i+1; y=j+1 ;}
	 	
	 }
	 }
	 cout<<abs(3-x)+abs(3-y)<<endl;
	
	
	
	return 0;
}