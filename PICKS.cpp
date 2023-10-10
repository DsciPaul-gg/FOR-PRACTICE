#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {

    string ln1,ln2,ln3,ln4,ln5;
    double n1,n2,n3,sqr,cube,ave;

    cout<<"Last Name of 1st Member: ";
    cin>>ln1;
    cout<<"Last Name of 2nd Member: ";
    cin>>ln2;
    cout<<"Last Name of 3rd Member: ";
    cin>>ln3;
    cout<<"Last Name of 4th Member: ";
    cin>>ln4;
    cout<<"Last Name of 5th Member: ";
    cin>>ln5;

    cout<<"Enter First Number: ";
    cin>>n1;
    cout<<"Enter Second Number: ";
    cin>>n2;
    cout<<"Enter Third Number: ";
    cin>>n3;

    sqr = n1 * n1;
    cube = n2 * n2 * n2;
    ave = (n1 + n2 + n3) / 3;

    cout<<"The Square of the First Number is "<<sqr<<endl;
    cout<<"The Cube of the Second Number is "<<cube<<endl;
    cout<<"The Average of the Three Number is "<<ave<<endl;

    return EXIT_SUCCESS;
    
}