#include<bits/stdc++.h>
using namespace std;

void bucketSort(float arr[], int n) {

    vector<float>buckets[n];
    
    for (int i = 0; i < n; i++) {
        int Index = n * arr[i];
        buckets[Index].push_back(arr[i]);
    }
    
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }
    
    int index = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            arr[index++] = buckets[i][j];
        }
    }
}

int main() {
    int n;
    cout<<"Enter Size of array=";
    cin>>n;
    float arr[n];
    cout<<"Enter Array elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bucketSort(arr, n);
    
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
