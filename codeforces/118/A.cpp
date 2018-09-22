#include<bits/stdc++.h>
using namespace std;

/*
    *
    * Prosen Ghosh
    * American International University - Bangladesh (AIUB)
    *
*/

bool Vowels(char ch){
    if((ch != 'A' && ch != 'a') && (ch != 'O' && ch != 'o') && (ch != 'Y' && ch != 'y') && (ch != 'E' && ch != 'e') && (ch != 'u' && ch != 'U') && (ch != 'I' && ch != 'i'))
	 return true;
    else return false;
}

int main(){

    string str,tmp;
    cin >> str;
    int len = str.size();
    for(int i = 0; i < len; i++){

        if(Vowels(str[i])){
            tmp+= '.';
            if(str[i] >= 65 && str[i] <= 90){
                tmp+=(str[i] + 32);
            }
            else tmp+=str[i];
        }
    }
    cout << tmp << endl;
    return 0;
}