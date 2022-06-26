//
//  AllIndicesOfANumberInAnArray.cpp
//  Recursion
//
//  Created by Ravi Ranjan on 26/06/22.
//

#include "AllIndicesOfANumberInAnArray.hpp"
#include <iostream>

using namespace std;


int indexes(int input[], int size, int x, int output[],int indx,int k)
{
    if(indx>=size)
        return k;
    if(input[indx]==x)
    {
        output[k]=indx;
        k++;
    }
    return indexes(input,size,x,output,indx+1,k);
}


int AllIndicesOfANumberInAnArray(int arr[], int size, int element, int outPut []) {
    
    // Base case when we tranverse to all array element and we do not found any occorance
    
    
    
//    int output = AllIndicesOfANumberInAnArray(arr + 1, size - 1, element);
    
    return 1;
}
void inputArrayForFindInidices() {
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
    cout << endl;
    cout << endl;
    cout << "<----------------------Printing Input------------------------->" << endl;
    i = 0;
    while (i < size) {
        cout << arr[i] << " -> ";
        i++;
    }
    cout << endl;
    cout << endl;
    cout << "<----------------------Element to Find------------------------>" << endl;
    int elementToFind;
    cout << "Enter your element which you want to find the existenece index : ";
    cin >> elementToFind;
    cout << endl;
    cout << endl;
    cout << "<--------------------------Solution----------------------------->" << endl;
//    cout << "Index of last Existence : " << AllIndicesOfANumberInAnArray(arr, size, elementToFind) << endl;
    cout << endl;
    cout << endl;
    cout << "<----------------------------Solved------------------------------>" << endl;
    cout << endl;
    cout << endl;

    
}
