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

struct node * init(long a); // constructor
void node_print(struct node * a); // print key, payload
void update_node_data(struct node * a); // updates the data field in a node  
#endif
