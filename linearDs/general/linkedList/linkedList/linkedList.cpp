#include "linkedList.h"

linkedList ::linkedList()
{
    this->head = this->tail = NULL;
}

linkedList::~linkedList() {}

void linkedList::addToHead(int data)
{
    if (this->head == NULL)
    {
        node *newNode = new node();
        newNode->data = data;
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        node *newNode = new node();
        newNode->data = data;
        newNode->next = head;
        this->head = newNode;
    }
}

void linkedList::addToTail(int data)
{
    if (this->tail == NULL)
    {
        node *newNode = new node();
        newNode->data = data;
        this->head = newNode;
        this->tail = newNode;
    }
    else
    {
        node *newNode = new node();
        newNode->data = data;
        this->tail->next = newNode;
        this->tail = newNode;
    }
}

node *linkedList::predecessor(int data)
{
    node *newNode = new node();
    newNode = this->head;
    while (newNode->data != data && newNode->next != NULL)
    {
        newNode = newNode->next;
    }
    return newNode;
}

void linkedList::add(node *predecessor, int data)
{
    node *newNode = new node();
    newNode->data = data;
    newNode->next = predecessor->next;
    predecessor->next = newNode;
}

bool linkedList::search(int data)
{
    node *newNode = new node();
    newNode = this->head;
    while (newNode->data != data && newNode->next != NULL)
    {
        newNode = newNode->next;
    }
    return newNode->data == data ? true : false;
}

void linkedList::display()
{
    node *newNode = new node();
    newNode = this->head;
    while (newNode != NULL)
    {
        std::cout << newNode->data << " ";
        newNode = newNode->next;
    }
    std::cout << "\n";
}

void linkedList::deleteNode(int data)
{
    node *newNode = new node();
    node *predecessor = new node();
    newNode = this->head;
    while (newNode->data != data && newNode != NULL)
    {
        if (newNode->next->data == data)
        {
            predecessor = newNode;
        }
        newNode = newNode->next;
    }
    if (predecessor == NULL)
    {
        std::cout << "No data found to delete\n";
    }
    else
    {
        predecessor->next = newNode->next;
        delete newNode;
    }
}
