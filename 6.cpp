#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int size=0;
//  vector<int> arr;
//  vector<vector<int>> arra;
 cin>>size;
 for(int i=0;i<size;i++){
    int op, start=0, end=0, diff=0, minStart=0, maxEnd=0;
    cin>>op;
    cin>>end;
    // diff=end;
    maxEnd=end;
    for(int j=1;j<op;++j){
        int temp=0;
        cin>>temp;
        if(j%2==0){
            end=start+temp;
            if(maxEnd<end){
                maxEnd=end;
            }
        }
        else{
            start=end-temp;
            if(minStart>start){
                minStart=start;
            }
        }
        // if(diff<=abs(start-end)){
        //     diff=abs(start-end);
        // }
        
    }
    // cout<<"start="<<start<<"end"<<end<<endl;
    cout<<abs(minStart-maxEnd)<<endl;
    // cout<<diff<<endl;
}
}