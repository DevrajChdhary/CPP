#include<bits/stdc++.h>
using namespace std;;

const int n=1e5+2;
vector<int>adj[n];
bool vis[n];

void dfs(int node){
    vis[node]=1;
    cout<<node<<" ";
    vector<int> :: iterator it;
    for(it=adj[node].begin();it!=adj[node].end();it++){
        if(vis[*it]);
        else{
            dfs(*it);

        }
    }
}
int main(){
    for(int i=0;i<n;i++){
        vis[i]=false;
    }
    int n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    int start;
    cin>>start;
    dfs(start);
    return 0;
}
