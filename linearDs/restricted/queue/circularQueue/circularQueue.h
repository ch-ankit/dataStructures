#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

#pragma once
#define MAX_SIZE 5

class circularQueue
{
private:
    int front, rear;

public:
    int elements[MAX_SIZE];
    int count;
    circularQueue();
    ~circularQueue();
    void enqueue(int data);
    int dequeue();
    int frontF();
    int rearF();
    bool isFull();
    bool isEmpty();
    void display();
};

#endif