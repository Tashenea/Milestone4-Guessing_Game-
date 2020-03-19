#pragma once
//#include "BinaryTreeClass.h"
//#include <cstddef>
//void BinaryTreeClass::binaryTree()
//{
//    root = NULL;
//}
#include <iostream>


using namespace std;


template<class T>
class BinaryTree
{
    struct Node
    {
        T data;
        Node* lChildptr;
        Node* rChildptr;

        Node(T dataNew)
        {
            data = dataNew;
            lChildptr = NULL;
            rChildptr = NULL;
        }
    };
private:
    Node* root;

    void Insert(T newData, Node*& theRoot)
    {
        if (theRoot == NULL)
        {
            theRoot = new Node(newData);
            return;
        }

        if (newData < theRoot->data)
            Insert(newData, theRoot->lChildptr);
        else
            Insert(newData, theRoot->rChildptr);;
    }

    void PrintTree(Node* theRoot)
    {
        if (theRoot != NULL)
        {
            PrintTree(theRoot->lChildptr);
            cout << theRoot->data << " ";;
            PrintTree(theRoot->rChildptr);
        }
    }

public:
    BinaryTree<int>()
    {
        root = NULL;
    }

    void AddItem(T newData)
    {
        Insert(newData, root);
    }

    void PrintTree()
    {
        PrintTree(root);
    }
};