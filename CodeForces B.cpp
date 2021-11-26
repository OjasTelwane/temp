// CodeForces B
#include <iostream>

using namespace std;

int main() {
int T;
cin>>T;
for(int i=0;i<T;i++){
    int a, b, c;
    cin>>a>>b;
    c=(a+b)/4;
    if(a<=c){
        cout<<a<<endl;
    }
    else if(b<=c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
}