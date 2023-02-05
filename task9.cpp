#include <iostream>
#include <cstring>
using namespace std;
int passcode(string numberr);
main()
{
    int num;
    string pinn;
    string moves[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "BoxStep", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    bool found = false;
    cout << "Enter 4 digit Pin: ";
    cin >> pinn;
    int number[4];
    int y = passcode(pinn);
    if (y == 4)
    {
        for (int x = 0; pinn[x] != '\0'; x++)
        {
            if (pinn[x] == '0')
            {
                num = 0 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '1')
            {
                num = 1 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '2')
            {
                num = 2 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '3')
            {
                num = 3 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '4')
            {
                num = 4 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '5')
            {
                num = 5 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '6')
            {
                num = 6 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '7')
            {
                num = 7 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '8')
            {
                num = 8 + x;
                cout << moves[num % 10] << ", ";
            }
            else if (pinn[x] == '9')
            {
                num = 9 + x;
                cout << moves[num % 10] << ", ";
            }
        }
    }
    else
    {
        cout << "Invalid Input.";
    }
}
int passcode(string numberr)
{
    int y = 0;
    for (int x = 0; numberr[x] != '\0'; x++)
    {

        if (numberr[x] == '0' || numberr[x] == '1' || numberr[x] == '2' || numberr[x] == '3' || numberr[x] == '4' || numberr[x] == '5' || numberr[x] == '6' || numberr[x] == '7' || numberr[x] == '8' || numberr[x] == '9')
        {
            y++;
        }
    }
    return y;
}