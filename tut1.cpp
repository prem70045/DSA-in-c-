#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void SumFind(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=arr[i];

    }
    cout<<ans;
}
void linearSearch(int arr[],int size,int target)
{
for(int i=0;i<size;i++)
{
    if(arr[i]==target)
    {
    cout<<"yes ! number is present ";
   return ;
    
    }
    

}
cout<<"number is not found ";
}
void findMaxMin(int arr[],int size)
{  
    int maxi=INT_MIN;
    int min=INT_MAX;
   for(int i=0;i<size;i++)
   {
    if(maxi<arr[i])
    maxi=arr[i];
    if(min>arr[i])
    min=arr[i];

      
   }
   cout<<maxi;
   cout<<min;
}
 void reverseArray(int arr[],int size)
 {
    int i=0;
    int j=size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
 }

int main(){
    int arr[10]={1,5,4,6,8,11,68,0,24,52};
    findMaxMin(arr,10);
    cout<<endl;
    SumFind(arr,10);
    cout<<endl;
    linearSearch(arr,10,53);
    reverseArray(arr,10);
    for(int i=0;i<10;i++)
    {
        cout<<arr[i]<<" ";
    }
}
