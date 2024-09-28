#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;


int main()
{
    int n = 0;
    string name, name1;
    cin >> n;
    while (n != 0)
    {
        n--;
        name1 = char(n % 26) + 'A';
        n /= 26;
        name += name1;
    }
    reverse(name.begin(), name.end());
    cout << name;
    return 0;
}