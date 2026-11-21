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
    int n, res = 0;
    string str;

    cin >> n >> str;
    for (int i = 1; i < n; i++)
    {
        if (str[i] == str[i - 1])
            res++;
    }
    cout << res << endl;
}