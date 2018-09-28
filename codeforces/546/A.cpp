#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long k,n,w,ans = 0;
    cin >> k >> n >> w;
    for(int i = 1; i <= w; i++){
        ans += i*k;
    }
    ans-=n;
    if(ans <= 0)cout << 0 << endl;
    else cout << ans << endl;
    return 0;
}