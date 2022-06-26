//
//  SomeOFElement.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 26/06/22.
//

#include "SomeOFElement.hpp"
#include <iostream>

using namespace std;

int sumOFElement(int * arr, int size) {
    
    
    // Base case -> when the size of array is 0  return 0;

    if (size == 0) {
        return  0;
    }
    // here we have to get sum of all element so the base case will be firstelement +  rest of array sum
    int smallCalculation = arr[0] + sumOFElement(arr + 1, size - 1);
    
    return  smallCalculation;
}

void SomeOFElementInput() {
    int size;
    
    cout << "<------------------------------------------------>" << endl;

    cout <<  "Enter the size of your array for dynamic allocation : ";
    
    cin >> size;
    
    // Creating a heap memory array
    int * arr = new int [size];
    
    cout << "<------------------------------------------------>" << endl;

    
    //Taking input till size of an array
    int i = 0;
    while (i < size) {
        cin >> arr[i];
        i++;
    }
    cout << "<------------------------------------------------>" << endl;
    // Printing the array first
    
    i = 0;
    while (i<size) {
        cout << "Element : " << arr[i] << " -> ";
        i++;
    }
    
    cout << endl;
    cout << "<------------------------------------------------>" << endl;

    cout << "Sum of element of the array is : " << sumOFElement(arr, size) << endl;
    
    cout << "<------------------------------------------------>" << endl;

    
}
