//adjacency list
#include<bits/stdc++.h>
using namespace std; 

int main()
{ 
    int n,m; 
    cin>>n>>m; 
    int adj[n+1][m+1]; 
    for(int i=0; i<m; i++)
    { 
        int u,v; 
        cin>>u>>v; 
        adj[u][v]=1; 
        adj[v][u]=1; 

    }
    return 0;
}

//graph implementation 
const int N=1e3+10; 
int graph1[N][N]; 

vector<int>graph2[N]; 

int main()
{ 
    int n,m;
    cin>>n>>m; 
    for(int i=0; i<m; ++i)
    { 
        int v1,v2; 
        graph[v1][v2]=1;
        graph[v2][v1]=1;

        graph2[v1].push_back(v2); 
        graph2[v2].push_back(v2); 

    }
}


//in case of a weighted graph 
vector<pair<int,int>>graph2[N]; 
graph[v1][v2]=wt;
graph[v2][v1]=wt; 

graph2[v1].push_back({v2,wt}); 
graph2[v2].push_back({v1,wt});

//checking for a connected graph O(N) time 
//adj matrix method 
if(graph1[i][j]==1)
{ 
    //connected
}

//adj list method 
for(int child: graph1[i])
{ 
    if(child==j)
    { 
        //connected
    }
}

//weighted graph 
for(pair<int,int> child:graph2[i])
{ 
    if(child.first==j)
    { 
        //connected
        child.second

    }
}

