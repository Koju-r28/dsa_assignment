#include <stdio.h>
#define V 5

int minDistance(int dist[], int visited[]) {
    int min = 999, index;
    for (int i = 0; i < V; i++)
        if (!visited[i] && dist[i] <= min) min = dist[i], index = i;
    return index;
}

int main() {
    int graph[V][V] = {
        {0,10,0,0,5},
        {10,0,1,0,2},
        {0,1,0,4,0},
        {0,0,4,0,3},
        {5,2,0,3,0}
    };

    int dist[V], visited[V] = {0};
    for (int i = 0; i < V; i++) dist[i] = 999;
    dist[0] = 0;

    for (int count = 0; count < V-1; count++) {
        int u = minDistance(dist, visited);
        visited[u] = 1;
        for (int v = 0; v < V; v++)
            if (!visited[v] && graph[u][v] && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printf("Vertex Distance from Source\n");
    for (int i = 0; i < V; i++) printf("%d \t %d\n", i, dist[i]);
    return 0;
}