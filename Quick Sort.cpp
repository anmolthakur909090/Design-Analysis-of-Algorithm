#include <iostream>
using namespace std;

//----------------------------Swap Helper--------------------------------------
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

//----------------------------Partition Function-------------------------------
int partition(int arr[], int low, int high) {
    int pivot = arr[high];       // last element as pivot
    int i = low - 1;             // boundary of smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);   // bring smaller to left
        }
    }

    swap(arr[i + 1], arr[high]);    // place pivot correctly
    return i + 1;                   // return pivot index
}

//----------------------------Quick Sort Function------------------------------
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);  // partition array

        quickSort(arr, low, pivotIndex - 1);   // sort left of pivot
        quickSort(arr, pivotIndex + 1, high);  // sort right of pivot
    }
}

//----------------------------Main Function------------------------------------
int main() {
    int n;
    cout << "How many numbers do you want to sort? ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quickSort(arr, 0, n - 1);

    cout << "\nHere is your sorted list: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
