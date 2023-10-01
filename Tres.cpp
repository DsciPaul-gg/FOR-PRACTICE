#include <iostream>

using namespace std;

int main() {

    int fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;

    cout << "Enter Number in Fahrenheit: ";
    cin >> fahrenheit;

    cout << celsius;

    return 0;

}