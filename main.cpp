#include "BST.h"

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
    cout << "Height        : " << height(root) << endl;

    return 0;
}