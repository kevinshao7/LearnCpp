/*
array:
type name[size]
to transfer array to another, must assign elements individually
!!!NO BOUNDS CHECKING !!!!!
C++ expects programmer to be responsible enough
int twoD[10][20]
more than 2 or 3 dimensions quickly runs out of memory
best sorting algorithm is qsort() Quicksort
null terminated string, need null at end to represent empty string
remember to make string long enough to include null termination
gets() from <cstdio> allows entry of string containing spaces
neither cin nor gets() performs bounds checking
header <cstring>:
strcpy(to, from) copies contents of from into to
strcat(s1,s2) appends s2 to end of s1, need to ensure s1 long enough to hold 
contents of both
strcmp(s1,s2) compares two strings, returns 0 (false) if equal
strlen(s) returns length of string
header <cctype> 
toupper()
tolower()
isupper() etc
array initialization
type name[size]={values}
unsized arrays useful
2D only leftmost can be unsized

pointer is object that contains memory address
type *var-name;
& is unary operator and returns memory address of operand
ptr = &total, puts into ptr the memory address of variable total
* returns value of variable at memory address
val = *ptr, places value of total into val, receives value at address ptr
!!!ensure pointer variables point to correct type of data!!!
*p = 101, at the location pointed by p, assign value 101
if p1 is integer pointer = 2000, p1++ returns 2004 (each int 4 bytes)
in general, pointer comparisons only valid when point to same object
pointer and array frequently interchangeable
name of array without index generates pointer to first element
str[4] or *(p1+4), need parentheses because * operation higher priority
pointer arithmetic can be faster than array indexing
pointer arithmetic more common in professional code
can access pointer as if it were an array
pointers can point into program's string table, not a good idea to change these
int *pi[10], array of 10 integer pointers
pi[2] = &var
terminating array with null string can help terminate loops
avoid uninitialized pointers by setting null 
float *p = 0;
int **balance; pointer to int pointer
p = &x
q = &p
cout << **q; returns value of x
!!!Make sure pointer points to something before use!!!
2. make sure type of pointer matches base
3. don't operate through null pointers
4. don't cast pointers just to make code work
manipulating data in computer memory can reduce code and improve performance
*/
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char*p;
    char str[80] = "This is a Test";
    cout << "original string: " << str << "\n";
    p = str; // assign to p the address of the start of the array
    while (*p){ //stops at null terminator
        if (isupper(*p)) *p = tolower(*p);
        else if (islower(*p)) *p = toupper(*p);
        p++;
    }
    cout << "Inverted-case string: " << str;

    char *dictionary[][2] = {
        "pencil", "A writing instrument",
        "keyboard", "An input device",
        "rifle", "A shoulder-fired firearm",
        "",""
    };
    char word[80];
    int i;
    cout << "\n Enter word \n";
    cin >> word;
    for (i = 0; *dictionary[i][0]; i++){
        if (!strcmp(dictionary[i][0], word)){
            cout << dictionary[i][1] << "\n";
            break;
        }
    }
    return 0;
}