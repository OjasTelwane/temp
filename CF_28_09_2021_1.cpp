#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
 int size=0;
 vector<string> arr;
 cin>>size;
 for(int i=0;i<size;i++){
     string temp;
     cin>> temp;
    //  cout<<temp<<endl;
     arr.push_back(temp);
 }
 for(int i=0;i<size;i++){
  int countA, countB, countC;
  countA = count(arr[i].begin(), arr[i].end(), 'A');
  countB = count(arr[i].begin(), arr[i].end(), 'B');
  countC = count(arr[i].begin(), arr[i].end(), 'C');
  for(int j=0; j<arr[i].size();j++){
      if(arr[i][j]=='A'){
          countA--;
          countB--;
      }
      if(arr[i][j]=='C'){
          countC--;
          countB--;
      }
  }
      if(countA==0 && countB==0 & countC==0){
          cout<<"YES"<<endl;
      }
      else{
      cout<<"NO"<<endl;    
      }
 }
}