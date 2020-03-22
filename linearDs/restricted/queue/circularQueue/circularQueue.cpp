#include <iostream>
#include "circularQueue.h"
// (n-1) Space Used

circularQueue::circularQueue()
{
    this->front = this->rear = this->count = 0;
    for (int i = 0; i < MAX_SIZE; i++)
    {
        this->elements[i] = 0;
    }
}

circularQueue::~circularQueue() {}

void circularQueue::enqueue(int data)
{
    int newRear = (rear + 1) % MAX_SIZE;
    if (isFull())
    {
        std::cout << "Queue overflow\n";
    }
    else
    {
        rear = newRear;
        this->count++;
        this->elements[rear] = data;
    }
}

int circularQueue::dequeue()
{
    if (isEmpty())
    {
        std::cout << "Queue underflow\n";
    }
    else
    {
        this->count--;
        front = (front + 1) % MAX_SIZE;
    }
    int ret = this->elements[front];
    this->elements[front] = 0;
    return ret;
}

void circularQueue::display()
{
    for (int i = 0; i < MAX_SIZE; i++)
    {
        std::cout << this->elements[i] << " ";
    }
    std::cout << "\n";
}

int circularQueue::frontF()
{
    return this->elements[this->front];
}

int circularQueue::rearF()
{
    return this->elements[this->rear];
}

bool circularQueue::isFull()
{
    return this->count >= MAX_SIZE - 1 ? true : false;
}
bool circularQueue::isEmpty()
{
    return this->count == 0 ? true : false;
}

//REMAINING WORK

// n spaces used
// circularQueue::circularQueue()
// {
//     this->front = this->rear = this->count = 0;
//     for (int i = 0; i < MAX_SIZE; i++)
//     {
//         this->elements = NULL;
//     }
// }

// circularQueue::~circularQueue() {}

// void circularQueue::enqueue(int data)
// {
//     int newRear = (rear + 1) % MAX_SIZE;
//     if (front == newRear)
//     {
//         std::cout << "Queue overflow\n";
//     }
//     else
//     {
//         rear = newRear;
//         this->count++;
//         this->elements[rear] = data;
//     }
// }

// int circularQueue::dequeue()
// {
//     if (front == rear)
//     {
//         std::cout << "Queue underflow\n";
//     }
//     else
//     {
//         this->count--;
//         front = (front + 1) % MAX_SIZE;
//     }
//     return this->elements[front];
// }

// void circularQueue::display()
// {
//     for (int i = 0; i < MAX_SIZE; i++)
//     {
//         std::cout << this->elements[i] << " ";
//     }
// }

// int circularQueue::frontF()
// {
//     return this->elements[this->front];
// }

// int circularQueue::rearF()
// {
//     return this->elements[this->rear];
// }

// bool circularQueue::isFull()
// {
//     return this->count >= MAX_SIZE - 1 ? true : false;
// }
// bool circularQueue::isEmpty()
// {
//     return this->count == 0 ? true : false;
// }