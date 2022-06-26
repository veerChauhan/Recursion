//
//  ArraySortedValidation.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 22/06/22.
//

#include "ArraySortedValidation.hpp"
#include <iostream>

using namespace std;

bool isArraySorted(int * arr, int size) {
    
    //Base case
    if (size ==0 || size == 1) {
        return true;
    }
     
    // check the smaller size so validating for 2 elements if they are not sorted then array is not sorted
    
    if (arr[0] > arr[1]) {
        return  false;
    }
    
    // if first condition is passed then we will check with next element by adding array + 1 and size will be decresed
    
    bool isSmallersorted = isArraySorted(arr + 1 , size -1);
    return isSmallersorted;
}


void inputArrayForProgram() {
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
    
    cout << "Check is " << isArraySorted(arr, size)<< endl;
    
}

