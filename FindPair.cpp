#include<bits/stdc++.h>
using namespace std;

void findSol(vector<int>& v,int n,int target){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(v[i]+v[j]==target){
                cout<<"Found pair="<<v[i]<<"+"<<v[j]<<"="<<target<<endl;
            }
        }
    }
}
int main(){
    int i,j,n;
    cout<<"Enter size of vector=";
    cin>>n;
    int target;
    cout<<"Enter target=";
    cin>>target;
    vector<int>v;
    int ele;
    cout<<"Enter elements in vector=";
    for(i=0;i<n;i++){
        cin>>ele;
        v.emplace_back(ele);
    }
    findSol(v,n,target);
    return 0;

}