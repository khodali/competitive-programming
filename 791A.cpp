/*

 _  __  _   _           _       _ _
| |/ / | | | | ___   __| | __ _| (_)
| ' /  | |_| |/ _ \ / _` |/ _` | | |
| . \  |  _  | (_) | (_| | (_| | | |
|_|\_\ |_| |_|\___/ \__,_|\__,_|_|_|


https://www.linkedin.com/in/karam-hodali-923774332/

*/

#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int a, b, counter = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        counter++;
    }
    cout << counter << endl;
}