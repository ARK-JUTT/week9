#include <iostream>
using namespace std;

float pricecalculation(float weight, string ffruit);
string fruit[4] = {"peach", "apple", "guava", "watermelon"};
float price[4] = {60, 70, 40, 30};
int main()
{

    float weight, result;
    string ffruit;
    cout << "Enter the desired fruit: ";
    cin >> ffruit;
    cout << "Enter the amount in kilograms: ";
    cin >> weight;
    result = pricecalculation(weight, ffruit);
    cout << "The total price of " << weight <<" kgs of " << ffruit << " is " << result ;

    return 0;
}

float pricecalculation(float weight, string ffruit)
{

    float  result;
    for (int index = 0; index < 4; index++)
    {
        if (ffruit == fruit[index])
        {
            result = weight * price[index];
        }
    }
    return result;
}