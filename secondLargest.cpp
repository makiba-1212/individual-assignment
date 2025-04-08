#include <iostream>
using namespace std;
int counter = 0; 
// Define the function first
int linearSearch(int arr[], int size, int searchItem) {
    for (int i = 0, j = size - 1; i <= j; i++, j--) { 
        counter++; 
        if (arr[i] == searchItem)  
            return i;  

        if (arr[j] == searchItem) 
            return j;  
    }
    return -1; // 
}
int main() {

    int inputArr[] = {6, 2, 32, 11, 8, 22, 16, 20, 5, 25}; 
    int size = sizeof(inputArr) / sizeof(inputArr[0]); 
    int item = 0; 
    
    int dataIndex = linearSearch(inputArr, size, item); 

    if (dataIndex == -1) {
        cout << "Element not found!!!" << endl;
    } else {
        cout << "Element found at index: " << dataIndex << endl;
    }
    cout << "Total number of iterations: " << counter << endl; 
    return 0;
}
