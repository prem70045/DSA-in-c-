// He first turns and travels 10 units of distance
// His second turn is upward for 20 units
// Third turn is to the left for 30 units
// Fourth turn is the downward for 40 units
// Fifth turn is to the right(again) for 50 units
// … And thus he travels, every time increasing the travel distance by 10 units.
// N=6 output=30,40;

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
void solve(int n)
{
    int x = 0;
    int y = 0;
    int i = 0;
    while (i < n)
    {
        if (i % 4 == 0)
        {
            x = x + (i + 1) * 10;
        }
        else if (i % 4 == 1)
        {
            y = y + (i + 1) * 10;
        }
        else if (i % 4 == 2)
        {
            x = x - (i + 1) * 10;
        }
        else if (i % 4 == 3)
        {
            y = y - (i + 1) * 10;
        }
        i++;
    }
    cout << x << " " << y << " ";
}
int main()
{

    int n;
    cin >> n;
    solve(n);
}