#ifndef  node_h
#define node_h
#include <stdlib.h>


struct node {
   int key;
   long payload;
   struct node * left;
   struct node * right;
   struct node * parent;
};

struct node * init(long a);
void node_print(struct node * a);
#endif
