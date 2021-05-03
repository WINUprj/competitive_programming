#include <bits/stdc++.h> 

using namespace std; 

typedef string str; 
bool FIRST = false; 

int main(){
    if (FIRST){
        // adjacency list representation of graph 
        vector<vector<int>> graph; 
        int n, m; 
        cin >> n >> m; 
        graph.resize(n+1); 
        while (m--){
            // a = root node, b = destination 
            int a, b; 
            cin >> a >> b; 
            graph[a].push_back(b); 
        }
    }
    else {
        // fastest implementation of graph using group of arrays 
        int n, m; 
        cin >> n >> m; 
        // for undirected graph, you need two times of edge capacity (i.e. 2*m)
        int cost[m], node[m], next[m], last[n];
        int cnt = 0; 
        while (m--){
            int x, y, z; // node x to y with cost of z
            cin >> x >> y >> z; 
            cost[cnt] = z; 
            node[cnt] = y; 
            next[cnt] = last[x]; 
            last[x] = cnt;  // this remembers the last edge that goes from node x to another node
            cnt++; 
        }
        // traverse to find neighbours
        int p = last[0]; 
        cout << p << endl; 

        while (p!=0){
            int neighbor = node[p]; 
            // int cost = cost[p]; 
            cout << neighbor << endl; 
            p = next[p]; 
        }
    }
}
 