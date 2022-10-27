#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
const int mod = 1e9+7;
#define vi                vector<int>


vi bfsOfGraph(int v, vi adj[]){
    int vis[v] = {0};
    vis[0] = 1;
    
    queue<int> q;
    q.push(0);
    vi bfs;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        bfs.push_back(node);

        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                q.push(it);
            }
        }    
    }
    return bfs;
}






signed main()
{
    int t;
    cin >> t;
    while(t--){
        solve();
    
    }
    
    
    
    return 0;
}
