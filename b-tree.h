#ifndef BTREE_H
#define BTREE_H


struct Node {
    int n;
    int key[MAX_KEYS];
    Node* child[MAX_CHILDREN];
    bool leaf;
};

class BTree
{
private:
    int m_year{};
    int m_month{};
    int m_day{};

public:
    BTree(int arr[]);

    Node* search(int value);
};

#endif