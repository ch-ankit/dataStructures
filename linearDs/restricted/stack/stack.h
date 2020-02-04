#ifndef STACK_H
#define STACK_H

#define MAX_SIZE 5
template <typename t>

class stack
{
private:
    t elements[MAX_SIZE];
    int top;

public:
    stack();
    ~stack();
    void push(t data);
    t pop();
    void up();
    bool isEmpty();
    bool isFull();
};

#endif
