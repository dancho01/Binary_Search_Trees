
#include "tree.h"

Tree makeNewNode(int value);

Tree TreeCopy(Tree t, int depth) {
	// TODO

	if (depth < 0 || t == NULL) {
		return NULL;
	}
	Tree new = makeNewNode(t->value);
	new->left = TreeCopy(t->left, depth - 1);
	new->right = TreeCopy(t->right, depth - 1);

	return new;
}

Tree makeNewNode(int value) {
	Tree n = malloc(sizeof(struct node));
	n->value = value;
	n->left = NULL;
	n->right = NULL;
	return n;
}
