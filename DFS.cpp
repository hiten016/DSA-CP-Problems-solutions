//DFS traversal 
#include <bits/stdc++.h>
using namespace std; 
const int N=1e5+10; 
vector<int>g[N]; 

bool vis[N]; 

void dfs(int vertex)
{ 
    vis[vertex]=true; 
    for(int child: g[vertex])
    { 
        if(vis[child]) continue; 
        dfs(child);
    }
  
}

int main()
{ 
    int n,m; 
    cin>>n>>m;
     for(int i=0; i<9; ++i)
     { 
        it v1,v2; 
        cin>>v1>>v2; 
        g[v1].push_back(v2); 
        g[v2].push_back(v1); 
     }
}

//DFS application
// 1) connected components check
int ct=0; 
for(int i=1; i<=n; ++i)
{ 
    if(vis[i]) continue; 
    dfs(i);
    count++; 

}
// 2) find loop in a graph 
// matrix problems 
