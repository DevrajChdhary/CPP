#include <iostream>
#include <vector>

using namespace std;

void countingSort(vector<int>& arr) {
    if (arr.empty()) {
        return; // No need to sort an empty array
    }

    // Find the maximum element in the array to determine the range
    int max_element = *max_element(arr.begin(), arr.end());

    // Create a count array and initialize it with zeros
    vector<int> count(max_element + 1, 0);

    // Count the occurrences of each element in the input array
    for (int i = 0; i < arr.size(); ++i) {
        count[arr[i]]++;
    }

    // Reconstruct the sorted array from the count array
    int index = 0;
    for (int i = 0; i <= max_element; ++i) {
        while (count[i] > 0) {
            arr[index] = i;
            index++;
            count[i]--;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};

    cout << "Original Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    countingSort(arr);

    cout << "Sorted Array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
