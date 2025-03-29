#include<iostream>
using namespace std;
void SwapAlternate(int arr[],int size)
{
    if(size<=1)
    return ;
    else
    {   
        int i=1;

        while(i<size)
        {
            swap(arr[i],arr[i-1]);
            i=i+2;

        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cout<<i<<"th Element";

        cin>>arr[i];


    }

SwapAlternate(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
    cout<<" ";
}

return 0;

}