#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back

bool fair(ll n)
{
	for (ll k = n; k != 0; k = k / 10)
	{
		if (k % 10 && (n % (k % 10)))
			return false;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;
	while (t--)
	{
		ll n;
		cin >> n;
		while (!fair(n))
		{
			n = n + 1;
		}
		cout << n << endl;
 
	}
 
 
 
 
}