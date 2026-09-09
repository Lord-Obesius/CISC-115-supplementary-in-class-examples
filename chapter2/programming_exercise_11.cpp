#include <iostream>
using namespace std;

int main()
{
    double tankCapacity, milesPerGallon;

    cout << "Enter your vehicles fuel tank capacity: ";
    cin >> tankCapacity;

    cout << "Enter your vehicles miles per gallon: ";
    cin >> milesPerGallon;

    cout << "your vehicle can drive \033[33m" << tankCapacity / milesPerGallon << "\033[0m miles per tank!" << endl;

    return 0;
}