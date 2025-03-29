#include<iostream>
using namespace std;
int maxSumOfAllSubArrays(int arr[],int size)
{    
    int maxi=-1;
    int sum=0;
     for(int i=0;i<size;i++){
        for(int j=i;j<size;j++)
        {    
             sum=0;
            for(int k=i;k<=j;k++)
            {
               sum+=arr[k];

            }
            maxi=max(maxi,sum);

        }
    }
    return maxi;
}
void subArrays(int arr[],int size)
{
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" ";

            }
            cout<<endl;

        }
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    subArrays(arr,size);
    cout<<maxSumOfAllSubArrays(arr,size);
}