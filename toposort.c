#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int adj[MAX][MAX];
int visited[MAX];
int recStack[MAX];
int stack[MAX];
int top=-1;
int hasCycle=0;
void addEdge(int u,int v)
{
  adj[u][v]=1;
}
void dfs(int v, int n){
visited[v]=1;
recStack[v]=1;
for(int i=0;i<n;i++){
if(adj[v][i]){
 if(!visited[i]){
  dfs(i,n);
 }
 else if(recStack[i]){
  hasCycle=1;
 }
}
}
recStack[v]=0;
stack[++top] = v;
}
 void topologicalSort(int n){
 for(int i=0;i<n;i++)
 {
  if(!visited[i]){
  dfs(i,n);
  }
 }
 if(hasCycle){
  printf("Graph contains a cycle. Topological sort not possible.\n");
  return;
 }
 printf("Topological Order:");
 while(top>=0){
  printf("%d ",stack[top--]);
 }
 printf("\n");
}

int main()
{
 int n, edges,u,v;
 printf("Enter the number of vertices:");
 scanf("%d", &n);
 if(n<=0||n>MAX){
  printf("Invalid number of vertices (1 to %d allowed).\n",MAX);
  return 1;
 }
 for(int i=0;i<n;i++){
  for(int j=0;j<n;j++){
    adj[i][j]=0;
   }
   visited[i]=0;
   recStack[i]=0;
  }
  printf("Enter the number of edges:");
  scanf("%d",&edges);
  printf("Enter the edges(u v)(0-based index):\n");
  for(int i=0;i<edges;i++){
  scanf("%d%d",&u,&v);
  if(u<0||u>=n||v<0||v>=n){
   printf("Invalid edge. Vertices must be between 0 and %d.\n",n-1);
   return 1;
  }
  addEdge(u,v);
  }
  topologicalSort(n);
  return 0;
 }
