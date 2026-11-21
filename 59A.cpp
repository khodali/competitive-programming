/*

 _  __  _   _           _       _ _
| |/ / | | | | ___   __| | __ _| (_)
| ' /  | |_| |/ _ \ / _` |/ _` | | |
| . \  |  _  | (_) | (_| | (_| | | |
|_|\_\ |_| |_|\___/ \__,_|\__,_|_|_|


https://www.linkedin.com/in/karam-hodali-923774332/

*/

#include <iostream>
#include <cstring>

using namespace std;

string uprstrign(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = toupper(s[i]);
    }
    return (s);
}

string lowerstrign(string &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        s[i] = tolower(s[i]);
    }
    return (s);
}

int main()
{
    int counter_uppercase_letters = 0;
    string str;
    cin >> str;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
            counter_uppercase_letters++;
    }
    if (counter_uppercase_letters > (str.length() / 2))
        cout << uprstrign(str) << endl;
    else
        cout << lowerstrign(str) << endl;

    return (0);
}