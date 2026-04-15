#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i; // Return index if found
        }
    }
    return -1; // Return -1 if not found
}

int main() {
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

    if (result != -1)
        cout << "Element " << target << " found at index " << result << " (position " << result + 1 << ")\n";
    else
        cout << "Element " << target << " not found in the array.\n";

    return 0;
}
