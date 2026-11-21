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
    int x = 0, answer = 0;
    cin >> x;
    if (x >= 1 && x <= 1000000)
    {
        while (x > 0)
        {
            x -= 5;
            answer++;
        }
        cout << answer << endl;
    }
}