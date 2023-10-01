#include <iostream>

using namespace std;

int main() {

    int g1, g2, g3, g4;
    double ave;
    char letterGrade;

    cout << "Enter First Grade: ";
    cin >> g1;

    cout << "Enter Second Grade: ";
    cin >> g2;

    cout << "Enter Third Grade: ";
    cin >> g3;

    cout << "Enter Fourth Grade: ";
    cin >> g4;

    ave = (g1 + g2 + g3 + g4) / 4;

    if (ave >= 91) {
        
        letterGrade = 'A';
    
    } else if (ave >= 81) {
       
        letterGrade = 'B';

    } else if (ave >= 71) {
        
        letterGrade = 'C';

    } else if (ave < 70) {
        
        letterGrade = 'F';

    }

        cout << "Average Grade: " << ave << endl;
        cout << "Letter Grade: " << letterGrade << endl;

    return 0;

}