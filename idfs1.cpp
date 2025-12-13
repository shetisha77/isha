#include <bits/stdc++.h>
using namespace std;

vector<int> adj[4];
bool vis[4];

void dfs(int u){
    vis[u]=true;
    cout<<u<<" ";
    for(int v:adj[u])
        if(!vis[v]) dfs(v);
}

int main(){
    adj[0]={1,2};
    adj[1]={3};
    dfs(0);
}

