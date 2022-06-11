//
//  Factorial.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 11/06/22.
//

#include "Factorial.hpp"
using namespace std;

int factorial(int n) {
    
    if (n == 0) {
        return  1;
    }
    return n * factorial(n -1);
}
