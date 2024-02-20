//Literals human readable values that cannot be altered by the program
//e.g. long double 1001.2L
// x = 10
// if y = x++, y set to 10, x set to 11
// if y = ++x, y set to 11, x set to 11
// || OR
// ! NOT
// && AND
// compound assignmnts
// var = var op expression
// var op= var expression
// integer division problem, cast with (float)
#include <iostream>

using namespace std;

bool XOR(bool A, bool B){
    return (A||B) && !(A&&B);
}
int main(){
    cout << "A B XOR(A,B) \n";
    for (bool i : {false,true}){
        for (bool j : {false,true}){
            cout << i;
            cout << " ";
            cout << j;
            cout << " ";
            cout << XOR(i,j);
            cout <<"\n";

        }
    }
    return 0;
}