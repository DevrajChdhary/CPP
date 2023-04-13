#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int>q;
    int ele;
    vector<int>v;
    for(int i=0;i<6;i++){
        cin>>ele;
        v.emplace_back(ele);
    }
    int k;
    cout<<"Enter The value of K=";
    cin>>k;
    for(int i=0;i<k;i++){
        q.push(-v[i]);
    }
    for(int i=k;i<6;i++){
        if(q.top()<v[i]){
            q.pop();
            q.push(-v[i]);
        }
    }
    cout<<k<<"th"<<"largest element is="<<-q.top();
    return 0;
}
