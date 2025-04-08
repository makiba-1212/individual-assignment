#include <iostream>
using namespace std;

void pointerInsertionSort(int* arr[], int n) {
    for (int i = 1; i < n; i++) {
        int* key = arr[i];  
        int j = i - 1;
        while (j >= 0 && *arr[j] > *key) {
            arr[j + 1] = arr[j];  
            j--;
        }
        arr[j + 1] = key;  
    }
}

int main() {
    int values[] = {40, 20, 35, 10, 35 };
    const int n = sizeof(values) / sizeof(values[0]);
    
    int* ptrArray[n];
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &values[i];
    }

    
    pointerInsertionSort(ptrArray, n);

    
    cout << "Sorted values: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i] << " ";
    }
    cout << endl;

    
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << values[i] << " ";
    }
    cout << endl;

    return 0;
}
