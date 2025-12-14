#include &lt;iostream&gt;
#include &lt;vector&gt;
#include &lt;queue&gt;
using namespace std;

int main(){
    vector&lt;vector&lt;pair&lt;int,int&gt;&gt;&gt; pipe(3);
    pipe[0]={{1,4},{2,7}};
    pipe[1]={{2,2}};

    vector&lt;int&gt; dist(3,1e9); 
    dist[0]=0;

    priority_queue&lt;pair&lt;int,int&gt;,vector&lt;pair&lt;int,int&gt;&gt;,greater&lt;&gt;&gt; pq;
    pq.push({0,0});

    while(!pq.empty()){
        auto [d,u]=pq.top(); pq.pop();
        for(auto [v,w]:pipe[u]){
            if(dist[u]+w &lt; dist[v]){
                dist[v]=dist[u]+w;
                pq.push({dist[v],v});
            }
        }
    }

    for(int i=0;i&lt;3;i++)
        cout &lt;&lt; "Min water path to field " &lt;&lt; i 
             &lt;&lt; ": " &lt;&lt; dist[i] &lt;&lt; endl;
}
