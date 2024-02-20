/*This is a comment
Following C++ a Beginner's Guide by Hebert Schildt
*/
#include <iostream>
//namespace is declarative region where elemenets can be placed, provides scope
// for identifiers, prevents name collisions,
using namespace std;
// A C++ program begins at main().
int main()
{
    cout << "C++ is power programming \n";
    int length,width,area;//declare variables
    long double pi;
    pi = 3.141592653589793238462643383;
    double dpi;
    dpi = 3.141592653589792328462643383;
    cout << "Enter the length";
    cin >> length;
    cout << "Enter the width";
    cin >> width;
    cout << "The length is ";
    cout << length;
    cout << "\n";
    cout << "The area is ";
    area = length*width;
    cout << area;
    cout << "Long double pi ";
    cout << pi;
    cout << "\n double pi ";
    cout << dpi; //More precision than what is printed
    char letter;
    for(letter = 0; letter < 100; letter++){
        cout << letter;
        cout <<"\n";
    }
    return 0;
}