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

int solve_this_problem()
{
    int i = 0;
    string str1, str2;
    cin >> str1 >> str2;

    while (str1[i])
    {
        if (tolower(str1[i]) > tolower(str2[i]))
            return (1);
        else if (tolower(str1[i]) < tolower(str2[i]))
            return (-1);
        i++;
    }
    return (0);
}

int main()
{
    cout << solve_this_problem() << endl;
    return (0);
}