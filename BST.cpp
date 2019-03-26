#include "BST.h"
#include <queue>

address newNode(int info) {
    address node = new Node;
    info(node) = info;
    left(node) = right(node) = NULL;

    return node;
}

void insert(address &root, int info) {
    if (root == NULL) {
        root = newNode(info);
    }

    if (info < info(root))
        insert(left(root), info);
    else if (info > info(root))
        insert(right(root), info);
}

void preOrder(address root) {
    if (root != NULL) {
        cout << info(root)<< ' ' ;
        preOrder(left(root));
        preOrder(right(root));
    }
}


void inOrder(address root) {
    if (root != NULL) {
        inOrder(left(root));
        cout << info(root)<< ' ' ;
        inOrder(right(root));
    }
}

void postOrder(address root) {
    if (root != NULL) {
        postOrder(left(root));
        postOrder(right(root));
        cout << info(root)<< ' ' ;
    }
}

int height (address root) {
    if (root == NULL) {
        return 0;
    } else {
        int l_height = height(left(root));
        int r_height = height(right(root));

        if (l_height > r_height)
            return l_height + 1;
        else
            return r_height + 1;
    }
}

void printGivenLevel(address root, int level) {
    if (root != NULL) {
        if (level == 1)
            cout << info(root) << ' ';
        else if (level > 1) {
            printGivenLevel(left(root), level-1);
            printGivenLevel(right(root), level-1);
        }
    }
}

void levelOrder(address root) {
    int h = height(root);
    for (int i = 1; i<= h; i++) {
        printGivenLevel(root, i);
    }
}

int minDepth(address root) {
    if (root == NULL) 
        return 0;
    
    if (left(root) == NULL & right(root) == NULL)
        return 1;

    if (left(root) == NULL)
        return minDepth(right(root)) + 1;

    if (right(root) == NULL)
        return minDepth(left(root)) + 1;

    return min(minDepth(left(root)), minDepth(right(root)));
}

int countLeaves(address root) {
    if (root == NULL)
        return 0;
    if (left(root) == NULL && right(root) == NULL)
        return 1;
    else
        return countLeaves(left(root)) + countLeaves(right(root));
}

void printLeaves(address root) {
    if (root != NULL) {
        if (left(root) == NULL && right(root) == NULL) {
            cout << info(root) << ' ';
            return;
        }

        if (left(root))
            printLeaves(left(root));
        
        if (right(root))
            printLeaves(right(root));
    }
}

void printInternalNodes(address root) {
    queue<address> q;
    q.push(root);
    while (q.empty() == false) {
        address current = q.front();
        q.pop();

        bool isInternal = false;

        if (left(current) != NULL) {
            isInternal = true;
            q.push(left(current));
        }

        if (right(current) != NULL) {
            isInternal = true;
            q.push(right(current));
        }

        if (isInternal == true)
            cout << info(current) << ' ';
    }
}

address findNode(address root, int info) {
    if (root == NULL || info(root) == info)
        return root;
    
    if (info(root) < info)
        return findNode(right(root), info);
    
    return findNode(left(root), info);
}

address minValueNode(address node) {
    address current = node;

    while (left(current) != NULL)
        current = left(current);

    return current;
}

address deleteNode(address root, int info) {
    if (root == NULL)
        return root;

    if (info < info(root))
        left(root) = deleteNode(left(root), info);
    else if (info > info(root))
        right(root) = deleteNode(right(root), info);
    else {
        if (left(root) == NULL) {
            address temp = right(root);
            free(root);
            return temp;
        } else if (right(root) == NULL) {
            address temp = left(root);
            free(root);
            return temp;
        }

        address temp = minValueNode(right(root));
        info(root) = info(temp);
        right(root) = deleteNode(right(root), info(temp));
    }

    return root;
}