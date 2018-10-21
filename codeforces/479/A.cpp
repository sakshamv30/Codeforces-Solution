#include <bits/stdc++.h>

using namespace std;

int main()
{

	int x[9];
 	
	int a,b,c;
    while(scanf("%d%d%d",&a,&b,&c)!=EOF)
    {
        x[0] = a + b + c;
        x[1] = a + (b * c);
        x[2] = a * (b + c);
        x[3] = (a + b) * c;
        x[4] = (a * b) + c;
        x[5] = a * b * c;
        sort(x, x+6);
        printf("%d\n",x[5]);
    }
    return 0;
}