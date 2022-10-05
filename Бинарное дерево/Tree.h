#pragma once

#include "Node.h"

template<class T, int size>

class Tree
{
private:

    // Корень.
    Node* m_root;

    // Количество узлов.
    unsigned int m_size;

public:

    Tree();

    ~Tree();

    public Node left;
    public Node right;

    // Получить корень.
    Node* GetRoot() const;

    // Вставка узла.
    void Insert(Node* node);
    class Tree {
        static class Node {
            int key;
            Node left;
            Node right;
        }
        private Node root;
    };
    // Максимальное значение от указанного узла.
    
    Node* Max(Node* node) const
    {
    Tree(int key)
        : Key(key)
        , Left(0)
        , Right(0)
    {
    }

    int Key;
    TNode* Left;
    TNode* Right;
    };
    // Минимальное значение от указанного узла.
    Node* Min(Node* node) const
    {
        Tree(int key)
            : Key(key)
            , Left(0)
            , Right(0)
        {
        }

        int Key;
        TNode* Left;
        TNode* Right;
    };
    // Следующий узел для указанного узла.
    Node* Next(const Node* node) const
    {
        Tree(int key)
        {
            Next->m_root;
        }
        int Key;
        TNode* Left;
        TNode* Right;

    };
    // Предыдущий узел для указанного узла.
    Node* Previous(const Node* node) const;

    // Печать от указанного узла.
    void Print(const Node* node) const
    {
        Node* temp = m_root;
        while (temp != 0)
        {
            cout << temp->m_size << " ";
            temp = temp->m_size;
        }

        cout << "\n\n";
    };
    // Удаление ветки для указанного узла.
    void Remove(Node* node)
    {
        if (node == null)
        {
            return;
        }

        var currentNodeSide = node.NodeSide;
    };
    // Поиск от указанного узла.
    Node* Search(Node* node, const char* key) const;

    //Edit
    Node* Edit(Node* node, const char* edit) const
    {
        TEdit* edits;
        edits = new TEdit(TabbedNotebook1);
        edits->Parent = TabbedNotebook1;
        edits->Align = alClient;
        edits->Text = IntToStr(i);
    }
};