#include <iostream>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string ans = "";
    for (auto it : str)
    {
        if (it < 'u')
            ans += it + 5;
        else
        {
            ans += (it - 'v') + 'a';
        }
    }
    cout << ans;
}