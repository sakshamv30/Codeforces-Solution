#include <iostream>
#include <algorithm>

using namespace std;

const int maxn=50+4;
int a[maxn];

int main()
{
    int n,m;
    while(cin>>n>>m)
    {
        for(int i=0;i<m;i++)
            cin>>a[i];
        sort(a,a+m);

        int ans=a[n-1]-a[0];

        for(int i=1;i<=m-n;i++)
        {
            ans=min(a[i+n-1]-a[i],ans);
        }
        cout<<ans<<endl;
    }

    return 0;
}
