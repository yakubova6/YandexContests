#include <iostream>
using namespace std;

int main() {

    int repeat_s = 1;
    string str;
    cin >> str;

    char lastSymbol = str[0];

    for (int i = 1; i <= str.length(); i++)
    {

        if (str[i] == lastSymbol)
        {
            repeat_s++;
            continue;
        }
        if (str[i] != lastSymbol) {
            cout << lastSymbol;
            if (repeat_s > 1)
                cout << repeat_s;

            lastSymbol = str[i];
            repeat_s = 1;
        }
    }
    return 0;
}