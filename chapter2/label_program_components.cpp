/*
* label lines as either 
   1. preprocessor directives
   2. declarations
   3. function headers
   4. statements

* what would the output be if the three variables were declared int? Area = 20
*/ 

#include <iostream> //preprocessor directives
using namespace std; //statement

int main() // function header
{
    double base, height, triangleArea; // declerations

    base = 10.0; //statement
    height = 4.0; //statement
    triangleArea = 0.5 * base * height; //statement

    cout << "Area = " << triangleArea << endl; //statement

    return 0; //statement
}