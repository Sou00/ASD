//
// Created by Sou on 07.12.2020.
//

#ifndef DRZEWA_AVL_TREE_H
#define DRZEWA_AVL_TREE_H
#include <iostream>


class AVL_Tree {
public:
    struct Node{
        int key;
        Node *left;
        Node *right;
        int height;
    };
public:
    Node* root=NULL;
    int height(Node *N);
    Node* newNode(int key);
    Node *rightRotate(Node *y);
    Node *leftRotate(Node *x);
    int getBalance(Node *N);
    Node* insert(Node* node, int key);
    Node * minValueNode(Node* node);
    Node* deleteNode(Node* root, int key);
    void preOrder(Node *root);
};


#endif //DRZEWA_AVL_TREE_H
