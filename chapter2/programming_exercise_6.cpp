// include statement(s)
// using namespace statement
#include<iostream>
using namespace std;

int main() { 
    
    // variable declaration
    string name;
    double studyHours;

    // executable statements
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter the amount of hours you need to study: ";
    cin >> studyHours;

    cout << "Hello, " << name << "! ";
    cout << "On Saturday, you need to study " << studyHours << " hours for the exam." << endl;

    // return statement
    return 0;
}