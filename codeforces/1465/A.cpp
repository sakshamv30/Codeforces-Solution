#include<bits/stdc++.h>
using namespace std;
int main(){
 
 ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t = 1; cin >> t;
   for(int p = 1; p <= t; p++) {
        int n; cin >> n;
  string s; cin >> s;
  int c = 0, i = n-1;
  while(i >= 0 && s[i] == ')') {
    c++;
    i--;
  }
  if(c > (n-c)) cout << "Yes\n";
  else cout << "No\n";
  }
}  