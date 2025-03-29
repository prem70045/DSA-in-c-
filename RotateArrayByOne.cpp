#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void rotateArray(int arr[],int size,int k)
{  
    int first=0;
    int last=(size-k)-1;
   while(first<=last)
   {
    swap(arr[first],arr[last]);
    first++;
    last--;

   }




   
   first=size-k;
   last=size-1;
   while(first<last)
   {
    swap(arr[first],arr[last]);
    first++;
    last--;

   }
   first=0;
   last=size-1;
    while(first<last)
   {
    swap(arr[first],arr[last]);
    first++;
    last--;

   }

}
int main(){
   int size;
   cout<<"enter array size ";
   cin>>size;
   int k;
   cout<<"Enetr rotate number ";
   cin>>k;
   int arr[size];
   for(int i=0;i<size;i++)
   {
    cout<<i<<"-th Element-> ";
    cin>>arr[i];

   }
   rotateArray(arr,size,k);
   for(int i=0;i<size;i++)
{
    cout<<arr[i];
    cout<<" ";
} 

}