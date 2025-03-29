#include<iostream>
using namespace std;
int main(){
    
    

    int arr[7]={1,2,3,4,5,7};
    
    int n=7;


    int sum= (n*(n+1))/2;
    int asum=0;


    for(int i=0;i<7;i++){
       asum+=arr[i];

    }
    cout<<sum-asum;



}