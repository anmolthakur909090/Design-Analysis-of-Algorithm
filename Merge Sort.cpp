#include <iostream>
using namespace std;

//----------------------------Merge Function-----------------------------------
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;       // size of left subarray
    int n2 = right - mid;          // size of right subarray

    // create temp arrays
    int L[n1], R[n2];

    // copy data into temp arrays
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // merge L and R back into arr
    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy remaining elements of L if any
    while (i < n1) {
        arr[k] = L[i];
        i++; k++;
    }

    // copy remaining elements of R if any
    while (j < n2) {
        arr[k] = R[j];
        j++; k++;
    }
}

//----------------------------Merge Sort Function------------------------------
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;   // find middle

        mergeSort(arr, left, mid);       // sort left half
        mergeSort(arr, mid + 1, right);  // sort right half

        merge(arr, left, mid, right);    // merge both halves
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

    mergeSort(arr, 0, n - 1);

    cout << "\nHere is your sorted list: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
