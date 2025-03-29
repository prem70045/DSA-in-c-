#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int findAllSubArray(vector<int>arr,int sum)
{
    int i=0;
    int j=0;
    int curr_sum=0;
    int count=0;
    while(j<arr.size())
    {
        curr_sum+=arr[j];
        
        while(i<=j && curr_sum>sum)
        {
            curr_sum-=arr[i];
            i++;
        }
        if(curr_sum==sum)
        count++;
        j++;



    }
    return count;
    
}
int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    vector<int>arr(n);
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
  cout<< findAllSubArray(arr,sum);

}