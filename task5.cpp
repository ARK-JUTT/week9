#include <iostream>
using namespace std;

//function

int main()
{   int length;
    cout << "Enter the length of array: " ; 
    cin  >> length ;
    string array[length] ;
    string character;
    for(int index = 0 ; index < length ; index++)
    {
        cout << "Enter any character: " ;
        cin >> array[index] ;
    }
    if((array[1] == array[0]) && (array[2] == array[1]))
    {
        if((array[2] == array[3]) && (array[3] == array[4]))
        {
            cout << "true" ;
        }
    }
    else 
    {
        cout << "false" ;
    }
    

return 0 ;
}