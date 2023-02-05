#include <iostream>
using namespace std;
main()
{
    int  number;
    int x;
    int index = 0 ;
    bool found = false;
    string firststring, secondstring;
    cout << "Enter 1st String: ";
    cin >> firststring;
    cout << "Enter 2nd String: ";
    cin >> secondstring;
    for (int x = 0; firststring[x] != '\0'; x++)
    {

        for (int y = 0; secondstring[y] != '\0'; y++)
            if (firststring[x] == secondstring[y])
            {
                index++;
                secondstring[y] = ' ';
                break;
            }
    }

    cout << index;
}
