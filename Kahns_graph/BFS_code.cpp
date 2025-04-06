//bfs code of kahns algorihm 
vector<int> topoSort(int V, vector<vector<int>>& edges) {
  vector<int> ans;
    vector<int> deg(V, 0);               // indegree of each node
    vector<vector<int>> adj(V);         // adjacency list

    for (auto it : edges) {
        adj[it[0]].push_back(it[1]);
        deg[it[1]]++;                   // increase indegree
    }

    queue<int> q;
    for (int i = 0; i < V; i++) {
        if (deg[i] == 0) {
            q.push(i);
        }
    }

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        ans.push_back(u);               // node with 0 indegree

        for (auto v : adj[u]) {
            deg[v]--;                   // reduce indegree of neighbors
            if (deg[v] == 0) {
                q.push(v);              // if indegree becomes 0, push to queue
            }
        }
    }

    return ans;
}
