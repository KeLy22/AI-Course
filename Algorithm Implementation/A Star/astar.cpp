#include <iostream>
#include <queue>
#include <vector>
#include <unordered_map>
#include <climits>
#include <set>

using namespace std;

// A* Search function
vector<int> a_star_search(
    unordered_map<int, vector<pair<int, int>>>& graph,
    int start, int goal,
    unordered_map<int, int>& heuristic,
    int& total_cost) {

    typedef pair<int, vector<int>> PQElement;
    priority_queue<PQElement, vector<PQElement>, greater<PQElement>> pq;

    unordered_map<int, int> g_values;
    g_values[start] = 0;

    pq.push(make_pair(heuristic[start], vector<int>{start}));

    while (!pq.empty()) {
        PQElement top = pq.top();
        pq.pop();

        int f_val = top.first;
        vector<int> path = top.second;
        int current = path.back();

        if (current == goal) {
            total_cost = g_values[goal];
            return path;
        }

        for (const auto& neighbor_pair : graph[current]) {
            int neighbor = neighbor_pair.first;
            int cost = neighbor_pair.second;

            int tentative_g = g_values[current] + cost;

            if (g_values.find(neighbor) == g_values.end() || tentative_g < g_values[neighbor]) {
                g_values[neighbor] = tentative_g;
                int f = tentative_g + heuristic[neighbor];
                vector<int> new_path = path;
                new_path.push_back(neighbor);
                pq.push(make_pair(f, new_path));
            }
        }
    }

    total_cost = -1; // If no path found
    return {};
}

int main() {
    unordered_map<int, vector<pair<int, int>>> graph;
    unordered_map<int, int> heuristic;
    int nodes, edges;

    cout << "Enter number of nodes: ";
    cin >> nodes;

    cout << "Enter heuristic values for each node (format: node h_value):" << endl;
    for (int i = 0; i < nodes; i++) {
        int node, h;
        cout << "Node " << i + 1 << ": ";
        cin >> node >> h;
        heuristic[node] = h;
    }

    cout << "Enter number of edges: ";
    cin >> edges;

    cout << "Is the graph undirected? (1 for Yes, 0 for No): ";
    int undirected;
    cin >> undirected;

    cout << "Enter edges with cost (format: from to cost):" << endl;
    for (int i = 0; i < edges; i++) {
        int from, to, cost;
        cin >> from >> to >> cost;
        graph[from].push_back(make_pair(to, cost));
        if (undirected) {
            graph[to].push_back(make_pair(from, cost));
        }
    }

    int start, goal;
    cout << "Enter start node: ";
    cin >> start;
    cout << "Enter goal node: ";
    cin >> goal;

    int total_cost = 0;
    vector<int> path = a_star_search(graph, start, goal, heuristic, total_cost);

    if (path.empty()) {
        cout << "No path found from " << start << " to " << goal << "!" << endl;
    } else {
        cout << "A* Path from " << start << " to " << goal << ": ";
        for (int node : path) {
            cout << node << " ";
        }
        cout << "\nTotal cost: " << total_cost << endl;
    }

    return 0;
}
