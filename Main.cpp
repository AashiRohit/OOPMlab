#include <iostream>
using namespace std;

// Function to move all zeros to the end of the array
void moveZerosToEnd(int arr[], int n) {
    int count = 0; // Keeps track of the position for the next non-zero element

    for (int i = 0; i < n; i++) {
        // If the current element is not zero
        if (arr[i] != 0) {
            // Swap it with the element at the 'count' index
            swap(arr[i], arr[count]);
            count++; // Move the count pointer forward
        }
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 0, 2, 0, 4, 3, 0, 5, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    moveZerosToEnd(arr, n);

    cout << "Modified array: ";
    printArray(arr, n);

    return 0;
}
