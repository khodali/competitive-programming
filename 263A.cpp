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
    int arr[5][5];
    int counter = 0, row_one = 0, coul_one = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                row_one = i;
                coul_one = j;
            }
        }
    }

    while (row_one != 2)
    {
        if (row_one > 2)
            row_one--;
        else
            row_one++;
        counter++;
    }
    while (coul_one != 2)
    {
        if (coul_one > 2)
            coul_one--;
        else
            coul_one++;
        counter++;
    }
    cout << counter << endl;
}