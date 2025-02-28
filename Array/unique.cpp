#include<bits/stdc++.h>
using namespace std;

int findUnique(vector<int>&arr,int n) {
  int XOR = 0;

  for(int i = 0; i < n; i++) {
    XOR ^= arr[i];
  }

  return XOR;
}

int main() {
  vector<int> arr = {1,1,3,3,5,6,6,8,8};
  
  cout<<findUnique(arr,arr.size());
}