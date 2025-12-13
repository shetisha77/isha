#include <bits/stdc++.h>
using namespace std;

int main(){
    int n=3;
    int dist[3][3]={{0,3,INF},{2,0,INF},{INF,7,0}};

    for(int k=0;k<n;k++)
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                if(dist[i][k]+dist[k][j]<dist[i][j])
                    dist[i][j]=dist[i][k]+dist[k][j];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<dist[i][j]<<" ";
        cout<<"\n";
    }
}
