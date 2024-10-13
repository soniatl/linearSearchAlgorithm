//
//  main.cpp
//  linearSearchAlgorithm
//
//  Created by Sonia Lopchan on 10/12/24.
//

#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {// a function named linearSearch that accepts three parameters
    for (int i = 0; i < size; i++) {//loop iterates over each element of the array from index 0 to size - 1.
        if (arr[i] == target) {
            return i; // Return index if target is found
        }
    }
    return -1; // Return -1 if target is not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 40;

    int result = linearSearch(arr, size, target);//calling a function that passes three integers
                //the result is index i if found, or -1 is not found
    if (result != -1) {
        cout << "Target value is at index: " << result << endl;
    } else {
        cout << "Target value not found" << endl;
    }

    return 0;
}
