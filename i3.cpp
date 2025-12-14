#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;queue&gt;
using namespace std;

int main(){
    vector&lt;vector&lt;pair&lt;int,int&gt;&gt;&gt; g(3);
    g[0]={{1,6},{2,2}};
    g[1]={{2,1}};

    vector&lt;int&gt; dist(3,1e9);
    dist[0]=0;

    priority_queue&lt;pair&lt;int,int&gt;, vector&lt;pair&lt;int,int&gt;&gt;, greater&lt;&gt;&gt; pq;
    pq.push({0,0});

    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        for(auto [v,w]:g[u]){
            if(dist[u]+w &lt; dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }

    for(int i=0;i&lt;3;i++)
        cout &lt;&lt; "Best route to center " &lt;&lt; i 
             &lt;&lt; ": " &lt;&lt; dist[i] &lt;&lt; endl;
}
