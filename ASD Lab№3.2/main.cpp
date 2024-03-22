#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Function for merging
void merge(vector<double>& arr, int l, int m, int r) {
    // Your merge implementation
}

// Function for abstract merge sort
void abstractMergeSort(vector<double>& arr, int l, int r) {
    // Your abstract merge sort implementation
}

// Function for two-way merge sort
void twoWayMergeSort(vector<double>& arr, int l, int r) {
    // Your two-way merge sort implementation
}

int main() {
    int N;
    double firstTerm, commonRatio;

    // Input size of the array and values for the first term and common ratio
    cout << "Enter the size of the array (100 < N < 1000): ";
    cin >> N;
    cout << "Enter the first term of the geometric progression: ";
    cin >> firstTerm;
    cout << "Enter the common ratio of the geometric progression: ";
    cin >> commonRatio;

    // Create an array and fill it with elements of the geometric progression
    vector<double> arr(N);
    arr[0] = firstTerm;
    for (int i = 1; i < N; i++) {
        arr[i] = arr[i - 1] * commonRatio;
    }

    // Output all N elements of the array
    cout << "Array elements: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Sort the array using abstract merge sort
    abstractMergeSort(arr, 0, N - 1);

    // Sort the array using two-way merge sort
    twoWayMergeSort(arr, 0, N - 1);

    // Output the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Calculate the sum of the progression
    double sum = (arr[0] * (1 - pow(commonRatio, N))) / (1 - commonRatio);
    cout << "Sum of the progression: " << sum << endl;

    return 0;
}
