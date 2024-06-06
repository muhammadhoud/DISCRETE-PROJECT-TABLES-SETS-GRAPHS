//#include <iostream>
//#include <queue>
//#include <cstring> // Required for memset function
//using namespace std;
//
//const int MAXN = 10001;
//int n, e, i, j;
//int graph[MAXN][MAXN];
//int color[MAXN];
//bool vis[MAXN];
//
//// Function to check if the graph is bipartite
//bool isBipartite() {
//    color[0] = 1; // Mark color as 1 for the first vertex
//    queue<int> q;
//    q.push(0);
//    while (!q.empty()) {
//        int temp = q.front();
//        q.pop();
//        for (i = 0; i < n; i++) {
//            if (graph[temp][i] && color[i] == -1) { // If there is an edge and color is not assigned
//                color[i] = 1 - color[temp];
//                q.push(i);
//            }
//            else if (graph[temp][i] && color[i] == color[temp]) { // If there is an edge and both vertices have the same color
//                return false; // Graph is not bipartite
//            }
//        }
//    }
//    return true;
//}
//
//// Function to find and print conflicting vertices in a non-bipartite graph
//void findConflictingVertices() {
//    cout << "Conflicting vertices causing the non-bipartite graph: ";
//    for (i = 0; i < n; i++) {
//        for (j = i + 1; j < n; j++) {
//            if (graph[i][j] && color[i] == color[j]) {
//                cout << i + 1 << " and " << j + 1 << " ";
//            }
//        }
//    }
//    cout << endl;
//}
//
//int main() {
//    int x, y;
//    system("cls"); // Clear the screen
//    system("Color B0"); // Change the console color
//    cout << "Enter the number of vertices: ";
//    cin >> n;
//    cout << "Enter the number of edges: ";
//    cin >> e;
//    cout << "\n";
//
//    // Initialize graph, color, and vis arrays
//    memset(graph, 0, sizeof(graph));
//    memset(color, -1, sizeof(color));
//    memset(vis, 0, sizeof(vis));
//
//    system("cls");
//    system("Color F4"); // Change the console color for input
//
//    // Input edges
//    for (i = 0; i < e; i++) {
//        cout << "\nEnter the first vertex of edge " << i + 1 << ": ";
//        cin >> x;
//        cout << "Enter the second vertex of edge " << i + 1 << ": ";
//        cin >> y;
//        x--; // Decrement to convert to zero-based index
//        y--; // Decrement to convert to zero-based index
//        graph[x][y] = 1;
//        graph[y][x] = 1;
//    }
//
//    system("cls");
//    system("Color 60"); // Change the console color for result
//
//    // Check if the graph is bipartite and display the result
//    if (isBipartite())
//        cout << "\nYES, the given graph is bipartite.\n";
//    else {
//        cout << "\nNO, the given graph is not bipartite.\n";
//        findConflictingVertices();
//    }
//
//    return 0;
//}
