#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void toggleBit(int n)
{
    string binaryNumber="";
    while(n)
    {
        binaryNumber=to_string(n%2)+binaryNumber;
        n/=2;

    }
    for(int i=0;i<binaryNumber.size();i++)
    {
        if(binaryNumber[i]=='0')
        binaryNumber[i] = '1';
        else
        binaryNumber[i] = '0';

    }
    int i = binaryNumber.size()-1;
    int ans=0;
    
    int j=0;
    while(i>=0)
    {
        if (binaryNumber[i] == '1')
        {
            ans+=pow(2,j);

        }
        j++;
        i--;
    }
    cout<<ans;



}
int togglebitOptimizeit(int n)
{
    int no_digit=0;
    int temp=n;
    while(temp)
    {
        no_digit++;
        temp /= 2;





    }

    int mask = ( 1 << (no_digit));
    int ans=n^(~mask);
    return ans;

}


int main()
{
    int n;
    cin>>n;
    toggleBit(n);
    cout<<endl;
    cout<<togglebitOptimizeit(n);
}