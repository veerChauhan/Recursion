//
//  Factorial.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 11/06/22.
//

#include "Factorial.hpp"
#include <iostream>
using namespace std;



int factorial(int n) {
    
    if (n == 0) {
        return  1;
    }
    return n * factorial(n -1);
}

void findFactorial() {
    int number;
    cout << "Enter your number to find factorial : " ;
    cin >> number;
    
    cout << "Factorial of number " << number << " Is " << factorial(number) << endl;

}
