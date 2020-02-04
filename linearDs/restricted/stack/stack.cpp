#include <iostream>
#include "stack.h"

template <typename t>
stack<t>::stack()
{
    top = -1;
}

template <typename t>
stack<t>::~stack() {}

template <typename t>
bool stack<t>::isEmpty()
{
    if (top < 0)
    {
        std::cout << "The stack is Empty: STACK UNDERFLOW" << std::endl;
        return true;
    }
    else
    {

        return false;
    }
}

template <typename t>
bool stack<t>::isFull()
{
    if (top >= MAX_SIZE - 1)
    {
        std::cout << "The Stack is Full: STACK OVERFLOW" << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

template <typename t>
void stack<t>::push(t data)
{
    top++;
    this->elements[top] = data;
}

template <typename t>
t stack<t>::pop()
{
    top = top > MAX_SIZE ? 5 : top;
    t temp = elements[top];
    top--;
    return temp;
}

template <typename t>
void stack<t>::up()
{
    std::cout << "The element at top is:" << elements[top] << std::endl;
}
