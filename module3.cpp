// else if 
/*
switch(expression){
    case constant 1:
        statement;
        break;
    case constant2:
        statement
        break;
    default:
        statement
}
switch expression must evaluate to character or integer
for loop can have multiple loop control variables
C++ mathematical functions:
sqrt()
sin()
cos()
tan()
log()
pow()
ceil()
floor()
all require header <cmath>
do{
    statements;
} while(condition);
executes at least once
break exits loop
continue forces next interation of loop early
label:
goto label; efficient way to leave nested loops, but tends to clutter programs


*/
#include <iostream>
using namespace std;

int main(){
    char ch = 32;
    while (ch){
        cout << ch << "\n";
        ch++;
    }
    return 0;
}
