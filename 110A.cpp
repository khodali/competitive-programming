/*

 _  __  _   _           _       _ _
| |/ / | | | | ___   __| | __ _| (_)
| ' /  | |_| |/ _ \ / _` |/ _` | | |
| . \  |  _  | (_) | (_| | (_| | | |
|_|\_\ |_| |_|\___/ \__,_|\__,_|_|_|


https://www.linkedin.com/in/karam-hodali-923774332/

*/

#include <iostream>

using namespace std;

int main()
{
    long long x;
    int count = 0;
    cin >> x;

    while (x > 0)
    {
        if (x % 10 == 7 || x % 10 == 4)
            count++;

        x /= 10;
    }
    if (count == 4 || count == 7)
        cout << "YES\n";
    else
        cout << "NO\n";
    return (0);
}