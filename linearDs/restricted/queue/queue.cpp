#include <iostream>
#include "queue.h"

template <typename t>
queue<t>::queue()
{
    front = rear = -1;
}

template <typename t>
queue<t>::~queue() {}

template <typename t>
bool queue<t>::isEmpty()
{
    if (rear == -1)
        return true;
    else
        return false;
}

template <typename t>
bool queue<t>::isFull()
{
    if (rear >= MAX_SIZE - 1)
        return true;
    else
        return false;
}

template <typename t>
void queue<t>::enqueue(t data)
{
    rear++;
    this->elements[rear] = data;
}

template <typename t>
t queue<t>::frontF()
{
    front = front < 0 ? 0 : front;
    return this->elements[front];
}
template <typename t>
t queue<t>::rearF()
{
    rear = rear > MAX_SIZE ? MAX_SIZE : rear;
    return this->elements[rear];
}
template <typename t>
t queue<t>::dequeue()
{
    front++;
    return this->elements[front];
}
