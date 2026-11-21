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
    int i = 0;
    string str;
    cin >> str;

    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = toupper(str[0]);
    cout << str << endl;
}