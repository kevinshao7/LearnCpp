#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include<string>
using namespace std;
void printcsv() { 
  
    // File pointer 
    fstream fin; 
  
    // Open an existing file 
    fin.open("C:/Users/shaoq/Documents/Exoplanets/LearnCpp/Flight_Test_RASAeroII.CSV", ios::in); 
    cout<<"Open";
    // Read the Data from the file 
    // as String Vector 
    vector<string> row; 
    string line, word, temp; 
  
    for (int i = 0; i<100; i++) { 
  
        row.clear(); 
  
        // read an entire row and 
        // store it in a string variable 'line' 
        getline(fin, line); 
  
        // used for breaking words 
        stringstream s(line); 
  
        // read every column data of a row and 
        // store it in a string variable, 'word' 
        while (getline(s, word, ',')) { 
  
            // add all the column data 
            // of a row to a vector 
            row.push_back(word); 
        } 
        cout << row[0] << "\n"; 

  
        // // convert string to integer for comparision 
        // roll2 = stoi(row[0]); 
  
        // // Compare the roll number 
        // if (roll2 == rollnum) { 
  
        //     // Print the found data 
        //     count = 1; 
        //     cout << "Details of Roll " << row[0] << " : \n"; 
        //     cout << "Name: " << row[1] << "\n"; 
        //     cout << "Maths: " << row[2] << "\n"; 
        //     cout << "Physics: " << row[3] << "\n"; 
        //     cout << "Chemistry: " << row[4] << "\n"; 
        //     cout << "Biology: " << row[5] << "\n"; 
        //     break; 
        // } 
    } 
    // if (count == 0) 
    //     cout << "Record not found\n"; 
} 
int main() {
    printcsv();
}