#include <bits/stdc++.h>
using namespace std;

int main(){
    int V=3;
    int g[3][3]={{0,2,0},{2,0,3},{0,3,0}};
    vector<int> key(V,1e9);
    vector<bool> mst(V,false);
    key[0]=0;

    for(int i=0;i<V;i++){
        int u=-1;
        for(int j=0;j<V;j++)
            if(!mst[j]&&(u==-1||key[j]<key[u])) u=j;

        mst[u]=true;
        for(int v=0;v<V;v++)
            if(g[u][v]&&!mst[v]&&g[u][v]<key[v])
                key[v]=g[u][v];
    }
    cout<<"MST Cost: "<<key[0]+key[1]+key[2];
}
