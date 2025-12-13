#include <bits/stdc++.h>
using namespace std;

int BIT[10],n=5;

void update(int i,int v){
    for(;i<=n;i+=i&-i) BIT[i]+=v;
}

int query(int i){
    int s=0;
    for(;i>0;i-=i&-i) s+=BIT[i];
    return s;
}
