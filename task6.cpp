#include <iostream>
using namespace std;

// function

int main()
{
    int length;
    cout << "Enter the length of array: ";
    cin >> length;
    int array[length];
    for (int index = 0; index < length; index++)
    {
        cout << "Enter any character: ";
        cin >> array[index];
    }
    int operation;
    cout << "Enter number of times you want to apply operation: ";
    cin >> operation;
    for (int i = 0; i < length; i++)
    {
        if (array[i] % 2 == 0)
        {
            for(int j = 0 ; j < operation ; j++)
            {
                array[i] = array[i] - 2;
            }
            
        }
        else
        {
             for(int j = 0 ; j < operation ; j++)
            {
                array[i] = array[i] + 2;
            }
        }
    }
    cout << "[ " << array[0] << " , " << array[1] << " , " << array[2] << " ]";

    return 0;
}