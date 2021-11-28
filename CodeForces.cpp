// CodeForces 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin>>T;
    for (int i=0;i<T;i++){
        int n, l, r, k;
        cin>>n>>l>>r>>k;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int e;
            cin>>e;
            if(e>=l && e<=r){
                arr.push_back(e);    
            }
        }
        sort(arr.begin(), arr.end());
        int count=0;
        for(int j=0;j<arr.size();j++){
            if(k-arr[j]>=0){
                k=k-arr[j];    
                count++;
            }
        }
        cout<<count<<endl;
    }
}