
#include <stdlib.h>

#include "tree.h"

int TreeHeight(Tree t) {
    if (t == NULL) {
        return -1;
    } else {
        int heightLeft = 1 + TreeHeight(t->left);
        int heightRight = 1 + TreeHeight(t->right);
        if (heightLeft > heightRight) {
            return heightLeft;
        } else {
            return heightRight;
        }
    }
}

