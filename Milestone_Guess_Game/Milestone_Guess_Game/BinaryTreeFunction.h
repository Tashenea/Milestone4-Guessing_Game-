#pragma once
#include "BinaryTreeClass.h"

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
   
};