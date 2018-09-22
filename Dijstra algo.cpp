#include <bits/stdc++.h>
using namespace std;
int dis[100]={0,0};
vector<int>v[100],cost[100];
queue <int>q;
int dijkstra(int source)
{
    int u,i,v1;
    dis[source]=0;
    q.push(source);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(i=0;i<v[u].size();i++)
        {
            v1=v[u][i];

            if(cost[u][i]+dis[u]<dis[v1])
                dis[v1]= cost[u][i]+dis[u];
            q.push(v1);
        }
    }
    cout<<endl;
    for(i=1;i<=8;i++)
        cout<<dis[i]<<endl;
    return 0;
}
int main()
{
    int node,edge,x,y,w;
    for(int i=1;i<=8;i++)
        dis[i]=9999999;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>x>>y>>w;
        v[x].push_back(y);
        cost[x].push_back(w);
    }
    dijkstra(5);
    return 0;
}
