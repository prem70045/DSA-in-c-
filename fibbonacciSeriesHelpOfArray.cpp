#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of fibbonacci sereis ";

    cin>>n;

    int arr[1000]={0,1};
    for(int i=2;i<n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for(int i=0;i<n;i++)
{
    cout<<arr[i];
    cout<<" ";
}
return 0;
}