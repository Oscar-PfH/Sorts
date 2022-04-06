#include <iostream>

using namespace std;

void bubbleSort(int[], int);
void printArray(int[], int);

int main() {
    int numbers[] = {8,2,6,4,9,5,1,3,7,4,5,6};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    bubbleSort(numbers, length);
    printArray(numbers, length);
    return 0;
}

void bubbleSort(int anArray[], int length) {
    int n;
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < length - 1; j++) {
            if (anArray[j] > anArray[j+1]) {
                n = anArray[j];
                anArray[j] = anArray[j+1];
                anArray[j+1] = n;
            }
        }
    }
}

void printArray(int anArray[], int length) {
    for (int i = 0; i < length; i++) {
        cout<<anArray[i]<<' ';
    }
}