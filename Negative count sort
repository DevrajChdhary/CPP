#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> count_sort(vector<int> arr) {
    if (arr.empty()) {
        return arr;
    }

    // find the range of the input values
    int min_val = *min_element(arr.begin(), arr.end());
    int max_val = *max_element(arr.begin(), arr.end());
    int range_val = max_val - min_val + 1;

    // initialize count array with zeros
    vector<int> count(range_val);

    // count the occurrences of each element
    for (int val : arr) {
        count[val - min_val]++;
    }

    // compute the cumulative count of smaller or equal valued elements
    for (int i = 1; i < count.size(); i++) {
        count[i] += count[i-1];
    }

    // initialize the sorted array with zeros
    vector<int> sorted_arr(arr.size());

    // fill the sorted array in reverse order to maintain stability
    for (int i = arr.size() - 1; i >= 0; i--) {
        int val = arr[i];
        int index = count[val - min_val] - 1;
        sorted_arr[index] = val;
        count[val - min_val]--;
    }

    return sorted_arr;
}

int main() {
    vector<int> arr = {-5, -2, 0, 2, 1, -4, 3};
    vector<int> sorted_arr = count_sort(arr);
    for (int val : sorted_arr) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
