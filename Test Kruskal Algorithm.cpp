#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int fathers[100];

int find(int x){
   if(fathers[x]==x){
        return x;
   }
   find(fathers[x]);
}
int main()
{
    for(int i=0; i<100; i++)
        fathers[i] = i;
    int n,m;
    int a,b,w;
    vector < pair < int , pair < int  ,int > > > edges;
    cin>>n>>m;
    for(int i=0; i<m; i++){
        cin>>a>>b>>w;
        edges.push_back(make_pair(w,make_pair(a,b)));
    }
    cout<<endl;
    int mst_weight=0, mst_edges=0;
    int mst_ni=0;
    sort(edges.begin(),edges.end());
    while(  mst_ni < m  )
    {
        a=edges[mst_ni].second.first;
        b=edges[mst_ni].second.second;
        w=edges[mst_ni].first;
        int x,y;
        x=find(a);
        y=find(b);
        if(x!=y){
            fathers[x]=y;
            mst_weight += w;
            cout<<"connected  " <<a<<" "<<b<<" "<<w<<endl;
        }
        mst_ni++;
    }
    cout<<"Minimum Spanning Tree Weight: "<<mst_weight<<endl<<endl;
    for(int i=1; i<n; i++){
        cout<<fathers[i]<<" ";
    }
    return 0;
}

