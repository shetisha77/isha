#include &lt;iostream&gt;
using namespace std;

int vis[3][3];
int field[3][3]={{1,0,1},{0,1,0},{1,0,1}};

void dfs(int x, int y){
    if(x&lt;0 || y&lt;0 || x&gt;=3 || y&gt;=3 || vis[x][y]) return;
    vis[x][y]=1;
    cout &lt;&lt; "Drone scanned cell: " &lt;&lt; x &lt;&lt; "," &lt;&lt; y &lt;&lt; endl;

    dfs(x+1,y);
    dfs(x-1,y);
    dfs(x,y+1);
    dfs(x,y-1);
}

int main(){
    dfs(0,0);
}
