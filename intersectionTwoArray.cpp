#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr1={2,5,3,5,2};
    vector<int>arr2={3,4,5};
    vector<int>arr3;
    int i=0;
    int j=0;
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
   while(i<arr1.size() && j<arr2.size())
   {
    if(arr1[i]==arr2[j])
    {
    arr3.push_back(arr1[i]);
    i++;
    j++;
    }
    else if(arr1[i]<arr2[j])
    i++;
    else
    j++;
   }
   for(int i=0;i<arr3.size();i++)
   {
    cout<<arr3[i]<<" ";
   }

}