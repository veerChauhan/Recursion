//
//  GeometricSum.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 27/06/22.
//
// 1 + 1/2 + 1/4 + 1/8 + ... + 1/(2^k)

#include "GeometricSum.hpp"
#include "PowerRecursion.hpp"

#include <iostream>

using namespace std;


double geometricSum(int n) {
    
    if (n == 0) {
        return 1;
    }
    return  ((double) 1 / powerRecurison(2, n) ) + geometricSum(n-1);
    
    
}
void inputForGeometricSum() {
    int n;
    cout << "Enter number of iteration for sum :" ;
    cin >> n;
    cout << endl;
    cout << "The sum is : " << geometricSum(n) << endl;
}
