#include <stdio.h>
#define MAX 5

int graph[MAX][MAX] = {
    {0,1,1,0,0},
    {1,0,0,1,0},
    {1,0,0,1,1},
    {0,1,1,0,1},
    {0,0,1,1,0}
};

int visited[MAX];

void DFS(int v) {
    printf("%d ", v);
    visited[v] = 1;
    for (int i = 0; i < MAX; i++)
        if (graph[v][i] && !visited[i]) DFS(i);
}

int main() {
    for (int i = 0; i < MAX; i++) visited[i] = 0;
    DFS(0);
    return 0;
}