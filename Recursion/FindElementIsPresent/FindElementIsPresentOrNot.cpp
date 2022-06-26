//
//  FindElementIsPresentOrNot.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 26/06/22.
//

#include "FindElementIsPresentOrNot.hpp"
#include <iostream>
using namespace std;



bool isElementExistInArray(int * arr, int size, int element) {
    
    
    // if the size of arrray is 0 or we reached at the point with recursion where is no element left then we should retrun false as there is no element to match with our element
    if (size == 0) {
        return false;
    }
    
    // We have array with size x where 1 >= x
    
    // we are  checking with first element but we can also test with last element 
    if (arr[0] == element) {
        return true;
    }
    bool smallCal = isElementExistInArray(arr + 1, size - 1, element);
    return smallCal;
    
}

void inputArrayForSearchingElement() {
    
    int size;
    
    cout << "<------------------------------------------------>" << endl;

    cout << "Enter the size of your array : ";
    cin >> size;
    
    cout << "<----------------------Taking Input-------------------------->" << endl;

    int * arr = new int [size];
    
    int i = 0;
    
    
    while (i < size) {
        cin >> arr[i];
        i++;
    }
    
    cout << "<----------------------Printing Input------------------------->" << endl;

    i = 0;
    
    while (i < size) {
        cout << arr[i] << " -> ";
        i++;
    }
    cout << endl;
    cout << "<----------------------Element to Find-------------------------->" << endl;
    
    int elementToFind;
    cout << "Enter your element which you want to find the existenece : ";
    cin >> elementToFind;
    
    cout << "<----------------------Solution-------------------------->" << endl;

    cout << "0 for false 1 for true " << isElementExistInArray(arr, size, elementToFind);
    
}
