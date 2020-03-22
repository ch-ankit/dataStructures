#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class node
{
public:
    int data;
    node *next;
    node()
    {
        this->next = NULL;
    }
};

class linkedList
{
public:
    linkedList();
    ~linkedList();
    node *head, *tail;
    void addToHead(int data);
    void addToTail(int data);
    void add(node *predecessor, int data);
    node *predecessor(int data);
    bool search(int data);
    void deleteNode(int data);
    void display();
};

#endif