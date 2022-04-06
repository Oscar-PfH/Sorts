#include <iostream>

using namespace std;

void insertionSort(int[], int);
void printArray(int[], int);

int main() {
    int numbers[] = {8,2,6,4,9,5,1,3,7,4,5,6};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    insertionSort(numbers, length);
    printArray(numbers, length);
    return 0;
}

void insertionSort(int arr[], int length) {
    int k, j;
    for (int i = 1; i < length; i++) {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = k;
    }
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout<<arr[i]<<' ';
    }
}