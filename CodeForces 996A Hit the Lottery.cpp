// CodeForces 996A Hit the Lottery
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    if(n>99){
        count=count+n/100;
        n=n%100;
    }
    if(n>19){
        count=count+n/20;
        n=n%20;
    }
    if(n>9){
        count=count+n/10;
        n=n%10;
    }
    if(n>4){
        count=count+n/5;
        n=n%5;
    }
    cout<<count+n;
}