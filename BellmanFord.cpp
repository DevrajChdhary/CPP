#include<bits/stdc++.h>
using namespace std;

const int inf=1e9;

int main(){
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adj.push_back({u,v,w});
    }
    int source;
    cin>>source;
    vector<int>dist(n,inf);
    dist[source]=0;
    for(int it=0;it<n-1;it++){
        for(auto edge:adj){
            int u=edge[0];
            int v=edge[1];
            int w=edge[2];
            dist[v]=min(dist[v],w+dist[u]);
        }
    }
    for(auto i:dist){
        cout<<i<<" ";
    }
    return 0;
}

