#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int arraySize = 26;

void generateRandomArray(int arr[], int min, int max) {
    srand(static_cast<unsigned>(time(nullptr)));

    for (int i = 0; i < arraySize; i++) {
        arr[i] = rand() % (max - min + 1) + min;
    }
}

void printArray(int arr[], int index = 0) {
    if (index >= arraySize) {
        cout << endl;
        return;
    }

    cout << arr[index] << " ";
    printArray(arr, index + 1);
}

int countElementsMeetingCriteria(int arr[], int index = 0) {
    if (index >= arraySize) {
        return 0;
    }

    int count = 0;
    if (arr[index] % 2 != 0 && index % 7 != 0) {
        count = 1;
    }

    return count + countElementsMeetingCriteria(arr, index + 1);
}

int sumElementsMeetingCriteria(int arr[], int index = 0) {
    if (index >= arraySize) {
        return 0;
    }

    int sum = 0;
    if (arr[index] % 2 != 0 && index % 7 != 0) {
        sum = arr[index];
    }

    return sum + sumElementsMeetingCriteria(arr, index + 1);
}

void replaceElementsWithZeros(int arr[], int index = 0) {
    if (index >= arraySize) {
        return;
    }

    if (arr[index] % 2 != 0 && index % 7 != 0) {
        arr[index] = 0;


    }

    replaceElementsWithZeros(arr, index + 1);
}

int main() {
    int r[arraySize];
    int min = 3;
    int max = 92;

    generateRandomArray(r, min, max);

    cout << "Generated Array: ";
    printArray(r);

    int count = countElementsMeetingCriteria(r);
    int sum = sumElementsMeetingCriteria(r);

    cout << "Count of elements meeting criteria: " << count << endl;
    cout << "Sum of elements meeting criteria: " << sum << endl;

    replaceElementsWithZeros(r);

    cout << "Modified Array: ";
    printArray(r);

    return 0;
}
