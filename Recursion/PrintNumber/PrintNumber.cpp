//
//  PrintNumber.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 12/06/22.
//

#include "PrintNumber.hpp"
#include <iostream>
using namespace std;


// Here number will call frst reecursive function but once it reached to base condition it will start printing the las line 24

void printTillLastNumber(int lastNumber) {
    
    if (lastNumber == 1) {
        cout << lastNumber << endl;
        return;
    }
    
    
    printTillLastNumber(lastNumber -1);
    cout << lastNumber << endl;
}

void printNumber() {
    
    int lastNumber;
    cout << "Enter the last number you want to print : ";
    cin >> lastNumber;
    
    printTillLastNumber(lastNumber);
    
    
}
