#ifndef GRAPH_H_INCLUDED
#define GRAPH_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct elmtP *adrNode;
typedef struct elmtC *adrEdge;

struct elmtC{
    char info;
    adrEdge next;
};

struct elmtP{
    char info;
    adrEdge child;
    adrNode next;
};


adrNode newNode(char x);
void addNode(adrNode &G, adrNode p);
adrNode findNode(adrNode G, char x);
void addEdge(adrNode &G, char x, char y);
bool isConnected(adrNode G, char x, char y);
void printGraph(adrNode G);

#endif // GRAPH_H_INCLUDED
