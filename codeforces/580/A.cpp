#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>

using namespace std;

int main(){
    int N;
    cin>>N;
    int tor;
    int now;
    cin>>tor;
    int maxx = 0;
    int sum = 1;
    while(--N){
        scanf("%d",&now);
        if(now>=tor)sum++;
        else {
            if(sum>maxx)maxx = sum;
            sum = 1;
        }
        tor = now;
    }
    if(sum>maxx)maxx = sum;
    cout<<maxx<<endl;
    return 0;
}