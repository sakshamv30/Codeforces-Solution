#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    cin >> str;
    bool OK = false;
    int one = 0,zero = 0;
    for(int i = 0; i < str.length(); i++){
        if(str[i] == '1'){one++;zero = 0;}
        else {zero++;one = 0;}
        if(one == 7 || zero == 7){
            OK = true;
            break;
        }
    }
    OK == true ? cout << "YES" << endl: cout << "NO" << endl;
    return 0;
}