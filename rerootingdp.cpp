//dp on trees
int main()
{ 
    int n; 
    cin>>n; 
    vector<int>arr(n+1); 

    for(int i=1; i<=n; i++)
    cin>> arr[i]; 

    vector<vector<int>>adj(n+1); 

    for(int i=1; i<n ; i++)
    { 
        int x,y ; 
        cin>>>x>>y; 
        adj[x].push_back; 
        adj[y].push_back; 

    }
    //no overlapping subproblem as it is a tree
    vector<vector<int>>dp(n+1, vetor<int>(2,0) ); 
    
    auto DFS=[&](int node,int parent,auto&&self)
    { 
        dp[node][1]=arr[node]; 
        for(auto&i:adj[node])
        { 
            if(i!=parent)
            { 
                self(i,node,self); 
                dp[node][1]+=dp[i][0]; 
                dp[node][0]+=max(dp[i][0],dp[i][1]); 

            }
        }
    }
    DFS(1,-1,DFS); 
    cout<<max(dp[1][0], dp[1][1])<< endl; 

}

//rerooting dp 
// for each node we need to find the answer
// now if root changes how the answer changes 
// O(nlogn) 

//store depth of each node and sum of all the depth is the answer 


//tree distances 
vector<int>adj(n=1), subtree(n+1,1), answer(n+1); 
for(int i=1; i<n; i++)
{ 
    int x,y; 
    cin>>x>>y; 
    adj[x].push_back(y); 
    adj[y].push_back(x); 

}

function<int(int,int,int)>dfs=[&](int node,int pareny, int depth)
{   

    //returning size or depth of the tree 
    int answer=depth; 
    for(auto &i: adj[node])
    { 
        if(i!=parent)
        {   

            //answer store the sum of depths 
            answer+=dfs(i,node,depth+1); 
            //subtree node stores subtree size
            subtree[node]+=subtree[i];
        }
    }
    return answer;
}

function<void(int,int,int)>reroot=[&](int node,int parent,int ans)
{ 
    answer[node]=ans; 
    for(auto&i: adj[node])
    { 
        if(i!=parent)
        { 
            reroot(i,node,ans+n-2,*subtree[i]); 
        }
    }
    reroot(1,1,dfs(1,1,0)); 
    for(int i=1; i<n; i++)
    { 
        cout<<answer[i]<<endl;
    }
}