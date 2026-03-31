
//Insertion Sort Written By Anmol Thakur

#include <iostream>
using namespace std;

int main() {
    int n;

    //------------------------Ask the user for the size of the array-----------------------
    cout << "How many numbers do you want to sort? ";
    cin >> n;

    int arr[n]; // Create an array of that size

    //------------------------Take inputs from the user------------------------------------
    cout << "Enter " << n << " numbers: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    //-------------------------The Insertion Sort Logic------------------------------------
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Shift elements that are larger than the 'key' to the right
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        // Place the 'key' in its correct sorted position
        arr[j + 1] = key;
    }

    //--------------------------Output the result-------------------------------------------
    cout << "\nHere is your sorted list: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}