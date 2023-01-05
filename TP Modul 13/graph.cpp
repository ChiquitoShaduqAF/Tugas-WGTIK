#include "graph.h"

adrNode newNode(char x){
    adrNode p;
    p = new elmtP;
    p->info = x;
    p->child = NULL;
    p->next = NULL;
    return p;
}

void addNode(adrNode &G, adrNode p){
    adrNode q;
    if (G == NULL){
        G = p;
    } else {
        q = G;
        while (q->next != NULL){
            q = q->next;
        }
        q->next = p;
    }
}

adrNode findNode(adrNode G, char x){
    adrNode q = G;
    while(q != NULL){
        if (q->info == x) {
            return q;
        }
        q = q->next;
    }
    return NULL;
}


void addEdge(adrNode &G, char x, char y){
    adrNode q = findNode(G, x);
    adrNode p = findNode(G, y);
    if (q != NULL && p!= NULL){
        if(!isConnected(G, x, y)){
            adrEdge a,b;
            a = new elmtC;
            b = new elmtC;
            a->info = x;
            b->info = y;
            a->next = NULL;
            b->next = NULL;

            if (q->child == NULL){
                q->child = b;
            }else{
                b->next = q->child;
                q->child = b;
            }

            if (p->child == NULL){
                p->child = a;
            }else{
                a->next = p->child;
                p->child = a;
            }
        }
    }
}

bool isConnected(adrNode G, char x, char y){
    adrNode q = findNode(G, x);
    adrNode p = findNode(G, y);
    bool cekA = false,cekB = false;
    if (q != NULL && p!= NULL){
        adrEdge a,b;
        a = q->child;
        while(a != NULL){
            if(a->info == y){
                cekA = true;
                break;
            }
            a = a->next;
        }
        b = p->child;
        while(b != NULL){
            if(b->info == x){
                cekB = true;
                break;
            }
            b = b->next;
        }
    }
    return cekA && cekB;
}

void printGraph(adrNode G){
    adrNode p = G;
    cout<<"======================================================="<<endl;
    while(p != NULL){
        cout<<"node "<<p->info<<" :";
        adrEdge q = p->child;
        while(q!=NULL){
            cout<<" - "<<q->info;
            q = q->next;
        }
        p = p->next;
        cout<<endl;
    }
   cout<<"======================================================="<<endl;

}
