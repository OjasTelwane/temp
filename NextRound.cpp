#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
int start=0, n, end, mid, temp=0;
int arr[100]={-1};
cin>>n>>temp;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

end=n-1;
while(start<end){
    mid=start + (end-start)/2;
    if(arr[mid]>=arr[temp]){
        start=mid+1;
    }
    else{
        end=mid-1;
    }
}
 cout<<mid;   
}