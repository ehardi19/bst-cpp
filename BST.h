#include <iostream>
#define info(a) (a)->info
#define left(a) (a)->left
#define right(a) (a)->right

using namespace std;

typedef struct Node *address;

struct Node
{
    int info;
    address left, right;
};

address newNode(int info);
void insert(address &root, int info);

void preOrder(address root);
void inOrder(address root);
void postOrder(address root);
void levelOrder(address root);

int height (address root); // A.K.A Maximum Depth
int minDepth(address root);
int countNodes(address root);
int countLeaves(address root);
int countInternalNodes(address root);

void printLeaves(address root);
void printInternalNodes(address root);

address findNode(address root, int info);
address deleteNode(address root, int info);