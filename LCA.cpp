//Least common ancestor 
void dfs(int v, int p=-1)
{ 
    par[v]=p; 
    for(int child:g[v])
    { 
        if(child==par) continue; 
        dfs(child,v);
    }
}
vector<int>path(int v)
{ 
    vector<int>ans;
    while(v!=-1)
    {
        ans.push_back(v);
        v=par[v];
    }
    return(ans.begin(),ans.end());
    return ans; 

}

int main()
{ 
    int mx_depth=-1;
    int mx_d_node;
    for(int i=1; i<=n; ++i)
    { 
        if(mx_depth<depth[i])
        { 
            mx_depth=depth[i];
            mx_d_node=i; 

        }
        depth[i]=0;
    }
}