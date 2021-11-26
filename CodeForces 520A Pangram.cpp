// CodeForces 520A Pangram
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string str;
    cin>>n>>str;
    
    
    vector<int> arr(26, 0);
    for(int i=0;i<n;i++){
        str[i] = tolower(str[i]);
        arr[str[i]-'a']++;
    }
    if(arr.end()==find(arr.begin(), arr.end(), 0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}