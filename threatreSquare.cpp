#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, a;
    long long int A1=0, A2=0;
    cin>>n>>m>>a;
    if(n%a==0){
        A1=n/a;
    }
    else{
        A1=(n/a)+1;
    }
    if(m%a==0){
        A2=m/a;
    }
    else{
        A2=(m/a)+1;
    }
    cout<<A1*A2;
}