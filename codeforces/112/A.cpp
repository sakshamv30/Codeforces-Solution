#include<bits/stdc++.h>
using namespace std;

char mk_lower(char ch){
    if(ch >= 65 && ch <= 90)return ch+32;
    else return ch;
}
int main(){

    string str1,str2;
    cin >> str1 >> str2;
    int res = 0;
    for(int i = 0, j = 0; i < str1.length(); i++, j++){
        if(mk_lower(str1[i]) < mk_lower(str2[i])){
            res = -1;break;
        }
        else if(mk_lower(str2[i]) < mk_lower(str1[i])){
            res = 1;
            break;
        }
    }
    cout << res << endl;
    return 0;
}