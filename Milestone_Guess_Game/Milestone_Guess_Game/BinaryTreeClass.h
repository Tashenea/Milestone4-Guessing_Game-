#pragma once

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
    

    void write_node(Node* n, fstream& file) {
        if (!n) return;
        write_node(n->left, file);
        file << n* > data;
        write_node(n->right, file);
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

};