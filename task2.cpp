#include <iostream>
using namespace std;

float discountedprice(string movie);
string movies[5] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRaider"};
string desiredmovie;

int main()
{

    cout << "Enter the movie you want to watch: ";
    cin >> desiredmovie;
    float result = discountedprice(desiredmovie);
    cout << "Ticket price after discount is " << result ;

    return 0;
}

float discountedprice(string movie)
{
    int requirednumber;
    float price, discount;
    for (int index = 0; index < 5; index++)
    {
        if (desiredmovie == movies[index])
        {
            requirednumber = index;
            break;
        }
        
    }
    if (requirednumber % 2 == 0)
    {
        discount =  (500 *10)/100;
        price = 500-discount ;
    }
    else
    {
        discount =  (500 *5)/100;
        price = 500-discount;
    }
    return price;
}