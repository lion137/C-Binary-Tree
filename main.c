#include <stdio.h>
#include "node.h"
#include "node.c"
#include <stdlib.h>


int main(int argc, char **argv)
{
	long a = 1;
	struct node * tree1;
	tree1 = init(a);
	node_print(tree1);
	return 0;
}
