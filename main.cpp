#include "BST.h"
#include<string>

void printFindNode(address res) {
     if (res != NULL)
        cout << info(res) << endl;
    else
        cout << "Not Found" << endl;
}

int main() {
    address root = NULL;
    

    cout << "1. INSERTION AND TRANSVERSAL" << endl << endl;

    cout << "Insert     : 41" << endl;
    insert(root, 41);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    
    cout << "Insert     : 20" << endl;
    insert(root, 20);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 11" << endl;
    insert(root, 11);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;


    cout << "Insert     : 29" << endl;
    insert(root, 29);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;


    cout << "Insert     : 32" << endl;
    insert(root, 32);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 65" << endl;
    insert(root, 65);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 50" << endl;
    insert(root, 50);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 91" << endl;
    insert(root, 91);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 72" << endl;
    insert(root, 72);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;

    cout << "Insert     : 99" << endl;
    insert(root, 99);
    cout << "Root       : " << info(root) << endl;
    cout << "InOrder    : "; inOrder(root); cout << endl;
    cout << "PreOrder   : "; preOrder(root); cout << endl;
    cout << "PostOrder  : "; postOrder(root); cout << endl;
    cout << "LevelOrder : "; levelOrder(root); cout << endl << endl;
    
    cout << "2. PROPERTIES" << endl << endl;
    cout << "Root          : " << info(root) << endl;
    cout << "Leaves        : "; printLeaves(root); cout << endl;
    cout << "Internal Nodes: "; printInternalNodes(root); cout << endl;
    cout << "Height        : " << height(root) << endl << endl;

    cout << "3. SEARCH" << endl << endl;
    
    cout << "Search     : 20" << endl;
    cout << "Result     : "; printFindNode(findNode(root, 20)); cout << endl;

    cout << "Search     : 30" << endl;
    cout << "Result     : "; printFindNode(findNode(root, 30)); cout << endl << endl;

    cout << "4. DELETE" << endl << endl;

    cout << "Delete     : 20" << endl;
    root = deleteNode(root, 20);
    cout << "Result     : "; inOrder(root); cout << endl << endl;

    cout << "Delete     : 99" << endl;
    root = deleteNode(root, 99);
    cout << "Result     : "; inOrder(root); cout << endl << endl;

    cout << "Delete     : 3" << endl;
    root = deleteNode(root, 3);
    cout << "Result     : "; inOrder(root); cout << endl << endl;

    return 0;
}