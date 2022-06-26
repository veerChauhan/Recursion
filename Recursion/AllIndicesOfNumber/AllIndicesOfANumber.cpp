//
//  AllIndicesOfANumber.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 21/06/22.
//

#include "AllIndicesOfANumber.hpp"
#include <iostream>
using namespace std;


void inputArray() {
    int size;
    cout << "Enter the size of array : ";
    cin >>size;
    
    int * arr = new int[size];
    int i = 0;
    while (i < size) {
        cin >> arr[i];
        i++;
    }
    cout << "Array inserted" << endl;
    
    i = 0;
    while (i <= size) {
        cout << arr[i]  << " ";
        i++;
    }
    cout << endl;
}

void allIndicesInAnumberArray(int * arr, int size, int x, int output[]) {
     
    
    
}
