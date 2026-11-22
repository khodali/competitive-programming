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
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= k; i++)
    {
        if (n % 10 == 0)
            n /= 10;
        else
            n -= 1;
    }
    cout << n << endl;
    return (0);
}