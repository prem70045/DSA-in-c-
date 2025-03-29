#include<iostream>
using namespace std;
int findunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        
        ans=ans^arr[i];

    }
    for(int i=1;i<size;i++){
        ans=ans^1;
    }
    return ans;
}
int main(){
    int arr[5]={1,4,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size;
   cout<<findunique(arr,size);
   return 0;

}