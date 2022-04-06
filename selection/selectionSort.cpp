#include <iostream>

using namespace std;

void selectionSort(int[], int);
void printArray(int[], int);

int main() {
    int numbers[] = {8,2,6,4,9,5,1,3,7,4,5,6};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    selectionSort(numbers, length);
    printArray(numbers, length);
    return 0;
}

void selectionSort(int arr[], int length) {
    for (int i = 0; i < length - 1; i++) {
        int min = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[min] > arr[j]) {
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
}

void printArray(int arr[], int length) {
    for (int i = 0; i < length; i++) {
        cout<<arr[i]<<' ';
    }
}