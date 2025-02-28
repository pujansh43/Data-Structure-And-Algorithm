#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptItself(vector<int>&arr,int n) {
    vector<int> temp(n);
    
    for(int i = 0; i < n; i++) {
        int product = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) {
                product *= arr[j];
            }
        }
        temp[i] = product;
    }
    
    return temp;
}

int main() {
    vector<int> arr = {1,8,2,4,7};
    
    vector<int> ans = productExceptItself(arr,arr.size());
    
    for(int num : ans) {
        cout<<num<<" ";
    }
}

//Time Complexity : O(n^2)
//Space Complexity : O(n)
