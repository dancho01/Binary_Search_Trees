
#include <stdlib.h>

#include "BSTree.h"

int BSTreeNodeDepth(BSTree t, int key) {
	if (t == NULL) {
		return -1;
	}
	if (key < t->value) {
		int sum = BSTreeNodeDepth(t->left, key);
		if (sum == -1) {
			return -1;
		}
		return 1 + sum;
	} else if (key > t->value) {
		int sum = BSTreeNodeDepth(t->right, key);
		if (sum == -1) {
			return -1;
		}
		return 1 + sum;
	} else {
		return 0;
	}
}
