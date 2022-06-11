//
//  main.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 11/06/22.
//

#include <iostream>
#include "Factorial.hpp"
using namespace std;


void findFactorial() {
    int number;
    cout << "Enter your number to find factorial : " ;
    cin >> number;
    
    cout << "Factorial of number " << number << " Is " << factorial(number) << endl;

}

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World! welcome to Recurison\n";
    
    findFactorial();
    return 0;
}
