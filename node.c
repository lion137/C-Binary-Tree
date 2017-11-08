// functons over struct
#include <stdlib.h>

struct node * init(long data){ // constructor
	struct node * root = malloc(sizeof(struct node));
	root->payload = data;
	root->key = 0;
	root->left = NULL;
	root->right = NULL;
	return (root);
	}
	
void node_print(struct node * a){ // dispplay node key and value
	printf("[");
	printf("%d", a->key); printf(", ");
	printf("%li", a->payload); printf("]");
	}
