#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int path[8]={800,600,750,900,1400,1200,1100,1500};
string busStop[8]={"th","ga","ic","ha","te","lu","ni","ca"};
int findIndex(string target)
{
    for(int i=0;i<8;i++)
    {
        if(target==busStop[i])
        return i;
    }
    return -1;
}
int getfair(string source,string desti)
{
    int srcIndex = findIndex(source);
    int desIndex = findIndex(desti);
    int total_dist = 0;
    if(srcIndex==-1 || desIndex==-1)
    return 0;
    else{

        while(srcIndex!=desIndex)
        {
            total_dist=path[srcIndex%8];
            srcIndex++;

        }
        return ceil(total_dist/200);

    }
}
int main()
{
  string source;
  cin>>source;
  string desti;
  cin>>desti;
  int fare = getfair(source, desti) ;
  if (fare == -1)
  {
      cout << "INVALID OUTPUT ";
  }
  else
  cout<<fare;
  


}
