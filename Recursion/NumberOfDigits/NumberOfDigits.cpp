//
//  NumberOfDigits.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 12/06/22.
//

/* Problem :
 
 Given the code to find out and return the number of digits present in a number recursively. But it contains few bugs, that you need to rectify such that all the test cases should pass.
 
 */

#include "NumberOfDigits.hpp"
#include <iostream>
using namespace std;


int digits(int numb) {
    
    if (numb % 10 == 0) {
        return 0;
    }

    return digits(numb /10) + 1;

}
void numberOfDigits(){
    int number;
    cout << "Enter your number to find the digits : ";
    cin >> number;
    cout << "The total digits in number is : " << digits(number) << endl << endl;
    
    
}
