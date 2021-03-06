#include "graphRepresentation.h"
#include "queue.h"
#include "stack.h"
#include "graph.h"


int main()
{
    FILE * f = fopen("matrix1.txt","r");
    readFromAdjMatrix(f);
    printAdjMatrix();
    NodeT** v=(NodeT**)malloc(nrOfVerteces*sizeof(NodeT));
    v=CreateList(adjMatrix);
    int **matrix=(int**)malloc(sizeof(int*)*nrOfVerteces);
    matrix=createMatrix(v);
    printAllList(v);
    printMatrix(matrix);
    bfs(0);
    dfs(0);
    return 0;
}
