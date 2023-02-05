#include <iostream>
using namespace std;

// function

int main()
{
    int ncolour;
    int count = -1;
    cout << "Enter the number of colours : ";
    cin >> ncolour;
    string colours[ncolour];
    for (int i = 0; i < ncolour; i++)
    {
        cout << "\tEnter the colour:\t";
        cin >> colours[i];
    }
    for (int j = 0; j < ncolour; j++)
    {
       
        if (colours[j] != colours[j+1])
        {
            count++;
        }
    }
    int colourtime = ncolour * 2;
    int totaltime = colourtime + count;
    cout << totaltime;

    return 0;
}