#include <iostream>
#include "AVL_Tree.h"

using namespace std;

int main() {
    AVL_Tree a;
    a.root=a.insert(a.root,9);
    a.root=a.insert(a.root,5);
    a.root=a.insert(a.root,10);
    a.root=a.insert(a.root,0);
    a.root=a.insert(a.root,6);
    a.root=a.insert(a.root,11);
    a.root=a.insert(a.root,-1);
    a.root=a.insert(a.root,1);
    a.root=a.insert(a.root,2);
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";
    a.preOrder(a.root);

    a.root=a.deleteNode(a.root,10);

    cout << "\nPreorder traversal after"
         << " deletion of 10 \n";
    a.preOrder(a.root);

    return 0;
}
