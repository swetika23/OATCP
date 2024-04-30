
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> arrangement(vector<vector<int>>& E) {
        int N = E.size();
        unordered_map<int, vector<int>> G;
        unordered_map<int, int> indegree, outdegree;
        G.reserve(N);
        indegree.reserve(N);
        outdegree.reserve(N);
        for (auto &e : E) {
            int u = e[0], v = e[1];
            outdegree[u]++;
            indegree[v]++;
            G[u].push_back(v);
        }
        int start = -1;
        
        for (auto it = G.begin(); it != G.end(); ++it) {
    int u = it->first;
    auto &vs = it->second;
    if (outdegree[u] - indegree[u] == 1) {
        start = u; // If there exists one node `u` that `outdegree[u] = indegree[u] + 1`, use `u` as the start node.
        break;
    }
}
        if (start == -1) start = E[0][0]; // If there doesn't exist such node `u`, use any node as the start node
        vector<vector<int>> ans;
        function<void(int)> euler = [&](int u) {
            auto &vs = G[u];
            while (vs.size()) {
                int v = vs.back();
                vs.pop_back();
                euler(v);
                ans.push_back({ u, v }); // Post-order DFS. The edge is added after node `v` is exhausted
            }
        };
        euler(start);
        reverse(begin(ans), end(ans)); // Need to reverse the answer array in the end.
        return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v[i][0]=a;
        v[i][1]=b;
    }
    vector<vector<int>>ans=arrangement(v);
    for(auto it:ans){
        cout<<it[0]<<" "<<it[1]<<endl;
    }

    return 0;
}
