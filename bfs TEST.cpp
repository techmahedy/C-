#include<bits/stdc++.h>
using namespace std;
int lebel[100]={0},parent[100];
queue <int> q;
vector <int> v[100];
int find(int x)
{

    if(parent[x]==0)
    return 0;
    find(parent[x]);
    printf("%d ",parent[x]);

}
int BFS(int source)
{
    int u,i,v1;
    lebel[source]=0;
    q.push(source);
    while(!q.empty()){
        u=q.front();
        q.pop();
        for(i=0;i<v[u].size();i++)
        {
            v1=v[u][i];
            if(!lebel[v1]){
                parent[v1]=u;
                lebel[v1]=lebel[u] + 1;
           }
            q.push(v1);
        }
    }
    for(int i=1; i<=10; i++)
        cout<<i<<" = "<<lebel[i]<<endl;
    return 0;
}
int main()
{
    int node,edge,x,y,w;
    cin>>node>>edge;
    for(int i=0; i<edge; i++)
    {
        cin>>x>>y;
        v[x].push_back(y);
    }
    BFS(1);
    find(10);
    return 0;
}
