//
//  PowerRecursion.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 11/06/22.
//

#include "PowerRecursion.hpp"
#include <iostream>
using namespace std;


int powerRecurison(int base, int power) {
    
    
    if (power == 0) {
        return  1;
    }
    
    return base * powerRecurison(base, power - 1);
}


void power() {
    
    int base, pow;
    
    cout << "Enter the base number : ";
    cin >> base;
    
    cout << "Enter the power number : ";
    cin >> pow;
    cout << endl;
   
    cout << "Power of " << pow << " Base " << base << " is "  << powerRecurison(base, pow) << endl << endl;
}


