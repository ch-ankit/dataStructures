#ifndef QUEUE_H
#define QUEUE_H

#define MAX_SIZE 5
template <typename t>
class queue
{
private:
    t elements[MAX_SIZE];
    int front, rear;

public:
    queue();
    ~queue();
    bool isFull();
    bool isEmpty();
    void enqueue(t data);
    t dequeue();
    t frontF();
    t rearF();
};

#endif