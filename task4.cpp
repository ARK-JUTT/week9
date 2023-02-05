#include <iostream>
using namespace std;


int main()
{
    int length , count = 0, CCount = 0 ;
    cout << "Enter the length of array: " ; 
    cin  >> length ;
    int numbers[length] ;
    int number;
    for(int index = 0 ; index < length ; index++)
    {
        cout << "Enter number: " ;
        cin >> number ;
        numbers[index] = number ;
        if(number == 7 || number%10 == 7)
        {
            count++;
        }
        else
        {
            CCount++;
        }
    }
    if(count!= 0)
    {
        cout << "BOOM!!!" ;
    }
    else
    {
        cout << "Shaprgam! number not  found" ;
    }

return 0 ;
}