//
//  CoutZeroInInteger.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 27/06/22.
//

#include "CoutZeroInInteger.hpp"
#include <iostream>

using namespace std;



int countZeroInInteger(int n) {
//    int count = 0;
//    while (n > 0) {
//        if (n%10 == 0) {
//            count ++;
//        }
//        n = n / 10;
//    }
//    return  count;
    
    if (n <= 9 ) {
        if (n == 0) {
            return 1;
        }
        else {
            return 0;
        }
    }

    int count = 0;
    int last = n %10;
    if (last == 0) {
        count ++;
    }
    return  count + countZeroInInteger(n/10);
  
}
void countZeroInIntegerInput() {
    
    int n;
    cout << "Enter your number to count zero : ";
    cin >> n;
     
    cout << "Is the number of zero in " << n << " : " << countZeroInInteger(n) << endl;
    
    
    
}
