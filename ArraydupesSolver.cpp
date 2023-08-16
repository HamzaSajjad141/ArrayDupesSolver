#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 0) {
        cout << "Invalid array size. Please enter a non-negative number.\n";
        return 1;
    }

    // Dynamically allocate memory for the array
    int* arr = new int[n];

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sort the array in non-decreasing order
    sort(arr, arr + n);

    cout << "Sorted array in non-decreasing order: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int n1 = n;
    cout << "duplicate value = ";

    // Identify and mark duplicate values by setting them to -1
    for (int i = 0; i < n1 - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            cout << arr[i] << " ";
            arr[i] = -1;
        }
    }
    cout << endl;

    cout << "After duplicate :";
    for (int i = 0; i < n1; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    int newIndex = 0;
    // Remove marked duplicates by shifting non-duplicate elements to the front of the array
    for (int i = 0; i < n1; ++i) {
        if (arr[i] != -1) {
            arr[newIndex++] = arr[i];
        }
    }

    n1 = newIndex;

    cout << "After : ";
    for (int i = 0; i < n1; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Answer : ";
    for (int i = 0; i < n1; ++i) {
        cout << arr[i] << " ";
    }

    // Deallocate the dynamically allocated memory
    delete[] arr;
}
