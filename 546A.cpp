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
    int k, n, w, total_cost = 0;
    cin >> k >> n >> w;

    for (int i = 1; i <= w; i++)
        total_cost += (k * i);

    if ((total_cost - n) > 0)
        cout << total_cost - n << endl;
    else
        cout << 0 << "\n";
    return (0);
}