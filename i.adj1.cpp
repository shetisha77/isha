#include <bits/stdc++.h>
using namespace std;

int main() {
    int V = 4;
    vector<int> adj[4];

    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);

    for(int i=0;i<V;i++){
        cout<<i<<": ";
        for(int x:adj[i]) cout<<x<<" ";
        cout<<"\n";
    }
}
