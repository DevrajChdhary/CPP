#include<bits/stdtr1c++.h>
using namespace std;

void bfsofGraph(int v,vector<int>adj[]){
    vector<int>bfs;
    vector<int>vis(v+1,0);
    for(int i=1;i<=v;i++){
        if(!vis[i]){
            queue<int>q;
            q.push(i);
            vis[i]=1;
            while(!q.empty()){
                int node=q.front();
                q.pop();
                bfs.push_back(node);
                for(int i=0;i<adj[node].size();i++){
                    if(!vis[i]){
                        q.push(i);
                        vis[i]=1;
                    }
                }
            }
        }
    }
    for(int i=0;i<bfs.size();i++){
        cout<<bfs.at(i)<<" ";
    }cout<<endl;
}


int main(){
    int n,m;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    bfsofGraph(n,adj);
    return 0;
}
