#include <iostream>
using namespace std;

void pointerBubbleSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*arr[j] > *arr[j + 1]) {
                int* temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
         }
        }
}

int main() {
    int values[] = {5, 2, 4, 6, 1, 3};
    const int n = sizeof(values) / sizeof(values[0]);
    
    int* ptrArray[n];
    for (int i = 0; i < n; i++) {
        ptrArray[i] = &values[i];
    }
    pointerBubbleSort(ptrArray, n);
    cout << "Sorted values: ";
    for (int i = 0; i < n; i++) {
        cout << *ptrArray[i] << " ";
    }
    cout << endl;

    return 0;
}