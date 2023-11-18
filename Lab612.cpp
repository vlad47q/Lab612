#include <iostream>
#include <iomanip>

using namespace std;

void generateArray(int *arr, int arrLength, int index = 0) {

    if (index == arrLength) {
        return;
    }

    arr[index] = rand() % 54 - 20;

    generateArray(arr, arrLength, index + 1);
}

void printArray(int *arr, int arrLength, int index = 0) {
    
    if (index == arrLength) {
        cout << endl;
        return;
    }

    cout << setw(5) << arr[index];
    printArray(arr, arrLength, index + 1);
}

void printFilteredArray(int *arr, int arrLength, int index = 0) {
    
    if (index == arrLength) {
        cout << endl;
        return;
    }

    if (arr[index] < 0 && arr[index] % 2 == 0) {
        cout << setw(5) << arr[index];
    }
    else {
        cout << setw(5) << " ";
    }
    printFilteredArray(arr, arrLength, index + 1);
}


int main() {
    
    const int pLength = 20;
    int p[pLength];

    generateArray(p, pLength);
    printArray(p, pLength);
    printFilteredArray(p, pLength);
}