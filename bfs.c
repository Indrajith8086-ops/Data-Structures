#include <stdio.h>
#include <stdlib.h>

int queue[100], rear = -1, front = -1;
int visited[100];

void enqueue(int value)
{
    if (rear == 99)
        printf("Queue overflow\n");
    else {
        if (front == -1)
            front = 0;
        queue[++rear] = value;
    }
}

int dequeue()
{
    if (front == -1 || front > rear)
        return -1;
    return queue[front++];
}

void bfs(int adj[10][10], int start, int n)
{
    int i;
    enqueue(start);
    visited[start] = 1;
    printf("BFS traversal: ");
    while (front <= rear) {
        int current = dequeue();
        printf("%d ", current);
        for (i = 0; i < n; i++) {
            if (adj[current][i] == 1 && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
    printf("\n");
}

int main()
{
    int n, adj[10][10], i, j, start;

    printf("Enter the number of vertices (max 10): ");
    scanf("%d", &n);
    if (n < 1 || n > 10) {
        printf("Invalid number of vertices.\n");
        return 1;
    }

    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &adj[i][j]);

    printf("Enter starting vertex (0 to %d): ", n - 1);
    scanf("%d", &start);
    if (start < 0 || start >= n) {
        printf("Invalid starting vertex.\n");
        return 1;
    }

    bfs(adj, start, n);
    return 0;
}
