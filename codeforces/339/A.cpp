#include<bits/stdc++.h>
using namespace std;

/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/

int main(){

    string str;
    int ar[10000],k = 0;
    cin >> str;
    for(int i = 0; i < str.length(); i++){
        if(str[i] >= 48 && str[i] <= 57)ar[k++] = str[i] - 48;
    }
    sort(ar,ar+k);
    for(int i = 0; i < k; i++){
        cout << ar[i];
        if(i < k-1)cout << "+";

    }
    return 0;
}