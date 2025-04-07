#include <iostream>
using namespace std;
int counter = 0; // Global variable to count iterations
// Define the function first
int linearSearch(int arr[], int size, int searchItem) {
    for (int i = 0, j = size - 1; i <= j; i++, j--) { 
        counter++; // Counting iterations
        if (arr[i] == searchItem)  // Checking from left side
            return i;  

        if (arr[j] == searchItem)  // Checking from right side
            return j;  
    }
    return -1; // If not found
}
int main() {
    // Sample array
    int inputArr[] = {6, 2, 32, 11, 8, 22, 16, 20, 5, 25}; 
    int size = sizeof(inputArr) / sizeof(inputArr[0]); // Calculate array size
    int item = 0; // Searching for 20
    // cin >> item; // Uncomment to take user input
    int dataIndex = linearSearch(inputArr, size, item); // Call search function
    // Display results
    if (dataIndex == -1) {
        cout << "Element not found!!!" << endl;
    } else {
        cout << "Element found at index: " << dataIndex << endl;
    }
    cout << "Total number of iterations: " << counter << endl; // Display number of iterations
    return 0;
}