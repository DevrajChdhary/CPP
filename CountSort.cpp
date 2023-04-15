#include<bits/stdc++.h>
using namespace std;

void CountSort(int arr[],int n){
    int k;
    k=arr[0];
    for(int i=0;i<n;i++){
        k=max(k,arr[i]);
    }
    int count[10]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]+=count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]]=arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i]=output[i];
    }
}

int main(){
    int n;
    cout<<"Enter size of array=";
    cin>>n;
    int arr[n];
    int i,j;
    cout<<"Enter elements in an array=";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    CountSort(arr,n);
    cout<<"Final sorted array is:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}