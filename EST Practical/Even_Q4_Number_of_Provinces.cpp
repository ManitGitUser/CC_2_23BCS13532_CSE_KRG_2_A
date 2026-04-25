#include<iostream>
#include<vector>
using namespace std;

void dfs(int node, vector<vector<int>>& adj, vector<int>& visited) {
    visited[node]=1;
    for(int j=0;j<adj.size();j++)
        if(adj[node][j]==1 && !visited[j])
            dfs(j,adj,visited);
}

int provinces(vector<vector<int>>& isConnected) {
    int n=isConnected.size();

    vector<int> visited(n,0);
    int count=0;

    for(int i=0;i<n;i++)
        if(!visited[i]) {
            dfs(i,isConnected,visited);
            count++;
        }

    return count;
}

int main() {
    vector<vector<int>> graph={
    {1,1,0},
    {1,1,0},
    {0,0,1}
    };

    cout<<provinces(graph);
}