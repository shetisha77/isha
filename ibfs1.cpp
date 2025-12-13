#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> adj[4]={{1,2},{3},{},{}};
    vector<bool> vis(4,false);
    queue<int> q;

    q.push(0); vis[0]=true;
    while(!q.empty()){
        int u=q.front(); q.pop();
        cout<<u<<" ";
        for(int v:adj[u])
            if(!vis[v]){
                vis[v]=true;
                q.push(v);
            }
    }
}
