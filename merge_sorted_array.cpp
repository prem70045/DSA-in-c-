#include<iostream>
using namespace std;
int main()
{
    int arr1[4]={1,5,7,8};
    int arr2[8]={1,3,5,8,11,15,18,19};
    int size1= sizeof(arr1)/sizeof(arr1[0]);
    int size2= sizeof(arr2)/sizeof(arr2[0]);


    int size=size1+size2;

    int ans[12];
    int i=0;
    int j=0;
    int k=0;

    while(i<size1 && j<size2)
    {
        if(arr1[i]==arr2[j])
        {
            ans[k++]=arr1[i];
            ans[k++]=arr1[j];
            i++;
            j++;


        }
        else if(arr1[i]<arr2[j])
        {
            ans[k++]=arr1[i];
            i++;

        }
        else
        {
            ans[k++]=arr2[j];
            j++;
        }
    }
    while(i<size1)
    {
        ans[k++]=arr1[i];
        i++;
    }
     while(j<size2)
    {
        ans[k++]=arr2[j];
        j++;
    }
  int size3=sizeof(ans)/sizeof(ans[0]);
  for(int i=0;i<size3;i++)
  {
    cout<<ans[i]<<" ";
  }

}