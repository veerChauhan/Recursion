//
//  FirstIndexOfExistence.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 26/06/22.
//

#include "FirstIndexOfExistence.hpp"
#include <iostream>
using namespace std;


int indexOfExisteceOfElementInArray(int * arr, int size, int element) {
    
    if (size == 0) {
        return -1;
    }
    if (arr[0] == element) {
        return  0;
    }
    int smallCalculation = indexOfExisteceOfElementInArray(arr + 1, size -1 , element);
    
    if (smallCalculation == -1) {
        return  -1;
    }
    return smallCalculation + 1;
}

void inputForFirstExistenceOfArray() {
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
    cout << "Enter your element which you want to find the existenece index : ";
    cin >> elementToFind;
    
    cout << "<----------------------Solution-------------------------->" << endl;

    cout << "Index of First Existence : " << indexOfExisteceOfElementInArray(arr, size, elementToFind) << endl;
    
    
    cout << "<----------------------Solved-------------------------->" << endl;

    
    
}
