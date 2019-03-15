#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;


#define N 1010


using namespace std;

vector<int> adj[N];
int leaf[N]; bool vis[N];
bool ext[N];

bool dfs(int s)
{
	int cnt = 0;
	for (int e : adj[s])
	{
		cnt += dfs(e);
	}

	leaf[s] = cnt;

	if (ext[s])
		return 0;
	else
		return 1;
}

int main()
{
	//freopen("in2.txt", "r", stdin);

	int i, j, k;
	int n, m;

	cin >> n;

	memset(ext, 0, sizeof(ext));
	for (i = 2; i <= n ; i++)
	{
		cin >> m;
		adj[m].push_back(i);
		ext[m] = 1;
	}

	dfs(1);

	for (i = 1; i <= n; i++)
	{
		//cout << ext[i] << " " << leaf[i] << endl;
		if (ext[i] && leaf[i] < 3)
		{
			cout << "No" << endl; return 0;
		}
	}

	cout << "Yes" << endl;

	return 0;
} 