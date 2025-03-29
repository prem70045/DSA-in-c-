// kadenes theroem help to find max sum of countinious subarry with maximum sum
#include<iostream>
using namespace std;
int maxiSumSubArray(int arr[],int size)
{
    int sum=0;
    int maxi=arr[0];
    for(int i=0;i<size;i++){
        sum+=arr[i];
        maxi=max(maxi,sum);
        if(sum<0)
        sum=0;

    }
    return maxi;
}

int main()
{
    int size;
    cin>>size;
    int arr[1000];

    for(int i=0;i<size;i++)
    {
        cin>>arr[i];

    }
    cout<<maxiSumSubArray(arr,size);
    

}
