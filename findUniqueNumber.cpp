#include<iostream>
using namespace std;
int main(){
    int arr[7]={1,3,2,5,1,5,3};
    int ans=0;

    for(int i=0;i<7;i++){
    ans=ans^arr[i];
    }
    cout<<ans;
}
