#include <iostream>
using namespace std;


int main()
{
    string name;
    cout << "Enter any name: " ;
    cin >> name ;

    int length = name.length();
    
    if(length % 2 == 0)
    {
        cout << "True" ;
    }
    else 
    {
        cout << "False" ;
    }

return 0 ;
}