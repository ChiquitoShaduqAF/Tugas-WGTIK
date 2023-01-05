#include "graph.h"

int main()
{
    adrNode G = NULL;

 // tambahkan node A, B, C dan D
    adrNode p;

    p = newNode_1301210284('A');
    addNode_1301210284(G, p);
    p = newNode_1301210284('C');
    addNode(G, p);
    p = newNode_1301210284('D');
    addNode_1301210284(G, p);
    p = newNode_1301210284('B');
    addNode_1301210284(G, p);

    // tambahkan edge pada graph seperti Gambar 1
    addEdge_1301210284(G, 'B', 'D');
    addEdge_1301210284(G, 'A', 'B');
    addEdge_1301210284(G, 'A', 'C');
    addEdge_1301210284(G, 'A', 'D');

    // tampilkan graph seperti Gambar 3
    printGraph_1301210284(G);

    return 0;
}
