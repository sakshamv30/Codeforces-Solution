#include<bits/stdc++.h>
using namespace std;

/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/

int main(){

    int n,cnt = 0;
    cin >> n;
    string str;
    cin >> str;
    for(int i = 0; i < str.size()-1; i++){
        while(str[i]==str[i+1]){
            cnt++;
            i++;
        }
    }
    cout << cnt << endl;
    return 0;
}