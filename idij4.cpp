#include <bits/stdc++.h>
using namespace std;

int main(){
    int V=3;
    vector<pair<int,int>> adj[3]={
        {{1,4},{2,1}},{{2,2}},{}
    };

    vector<int> dist(V,1e9);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>> pq;

    dist[0]=0; pq.push({0,0});
    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        for(auto [v,w]:adj[u])
            if(dist[v]>d+w){
                dist[v]=d+w;
                pq.push({dist[v],v});
            }
    }
    for(int d:dist) cout<<d<<" ";
}
